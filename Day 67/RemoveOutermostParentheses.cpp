class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> sk;
        // result to store ans, 
        // temp to store current  primitive valid parentheses strings
        string res = "", temp = "";
        for(auto ch: s){
            if(ch=='('){
                sk.push(ch);
                temp.push_back(ch);
            }
            else{
                sk.pop();
                temp.push_back(ch);
            }
            
            // when the stack is empty
            if(sk.empty()){
                // removing first and last char of curr str
                temp.erase(temp.begin());
                temp.pop_back();
                res+=(temp);
                temp = "";
            }
        }
        return res;
    }
};