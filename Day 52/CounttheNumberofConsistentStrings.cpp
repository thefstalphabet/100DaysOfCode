// APPROACH USING SETS
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words){
        // storing all the char of allowed in set
        set<char> st(allowed.begin(), allowed.end());
        // answer var to store answer
        int ans = 0;
        // iterating on words array
        for(auto ele: words){
            // sorting the current string
            sort(ele.begin(), ele.end());
            // iterating to all char in the string
            for(int i=0; i<ele.size(); i++){
                if(st.find(ele[i]) != st.end() && i==ele.size()-1) ans++;
                else if(st.find(ele[i]) == st.end()) break;
            }
        }
        return ans;
    }
};