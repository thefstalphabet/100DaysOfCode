class Solution {
public:
    string reverseWords(string s) {
        //  inserting a extra space to the string s
        s.push_back(' ');
        // ans stores the final answer
        // tmp stores the curr word
        string ans="", tmp="";
        // iterating on string s
        for(int x=0; x<s.size(); x++){
            if(s[x]!=' '){
                tmp.push_back(s[x]);
            }
            else{
                // reversing the tmp string
                reverse(tmp.begin(), tmp.end());
                // pusing it into ans string
                ans+=tmp;
                if(x<s.size()-1) ans.push_back(' ');
                tmp.clear();
            }
        }
        return ans;
    }
};