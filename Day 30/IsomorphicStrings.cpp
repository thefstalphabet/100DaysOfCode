class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // checking waather s and t strings same or not
        if(s.size() != t.size()){
            return 0;
        }
        
        // init two array size 256 and init them as 0
        int m1[256] = {};
        int m2[256] = {};
        
        for (int i=0; i<s.size(); ++i){
            // s and t char variable
            char c1 = s[i];
            char c2 = t[i];
            
            if (m1[c1] != m2[c2]){
                return 0;
            }
            else{
                m1[c1] = i + 1;
                m2[c2] = i + 1;
            }
        }
        return 1;
    }
};