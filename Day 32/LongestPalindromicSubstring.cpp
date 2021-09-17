class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1) return s; // base case
        // since we know the length is more than one
        // so init max len as 1
        int max_len = 1;
        int n = s.size(); // size of a string
        int start = 0, end = 0; // init starting and ending point is zero
        
        // for Odd length
        for(int i = 0; i < n-1; ++i){
            int l = i, r = i; // left and right pointer for odd len
            while(l >= 0 && r < n){
                // when both are same keep moving
                if(s[l] == s[r]){
                    l--; r++;
                }
                else break;       
            }
            int len = r-l-1; // length of palindrom string
            if(len > max_len){
                max_len = len;
                start = l+1;
                end = r-1;
            }
        }
        
        // for Even length
        for(int i = 0; i < n-1; ++i){
            int l = i, r = i+1; // left and right pointer for even len
            while(l >= 0 && r < n){
                // when both are same keep moving
                if(s[l] == s[r]){
                    l--; r++;
                }
                else break;      
            }
            int len = r-l-1; // length of palindrom string
            if(len > max_len){
                max_len = len;
                start = l+1;
                end = r-1;
            }
        }
        
        return s.substr(start, max_len);
        
    }
};