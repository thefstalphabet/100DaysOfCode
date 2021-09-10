class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // a string have 256 diffrent char
        // so taking 256th lenth of vector and store -1 to each
        vector<int> vec(256, -1);
        // strlen hold long substring char length
        int strlen = 0, start = -1;
        
        // a loop runs from o to length of s
        for (int i=0; i<s.size(); ++i){
            // if char position is greater than start then updating start
            if (vec[s[i]]>start){
                start = vec[s[i]];
            }
            // then upadating char position with i
            vec[s[i]] = i;
            
            strlen = max(strlen, i-start);
        }
        return strlen;
        
        
    }
};