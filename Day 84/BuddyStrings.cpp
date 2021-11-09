class Solution {
public:
    bool buddyStrings(string s, string goal) {
        // we return false when both strs are diffrent size
        if(s.size() != goal.size())
            return 0;
        // when both strs are same
        if(s == goal){
            // set to store char of s
            set<char> st;
            for(auto ch: s) st.insert(ch);
            // return true if there is a same char in string
            if(st.size()<s.size()) return 1;
            return 0;
        }
        // vector to store the index of not smae char of both string
        vector<int> ve;
        for(int i=0; i<s.size(); i++){
            if(s[i] != goal[i]){
                ve.push_back(i);
            }
        }
        if(ve.size() == 2 && s[ve[0]]==goal[ve[1]] && s[ve[1]]==goal[ve[0]])
            return 1;
        return 0;
        
    }
};