class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> sk;
        for(auto c: s){
            if(c == '(') sk.push(c);
            else{
                // when it is non empty or top is opening brackt
                if( !sk.empty() && sk.top() == '('){
                    sk.pop();
                }
                else sk.push(c);
            }
        }
        return sk.size();
    }
};