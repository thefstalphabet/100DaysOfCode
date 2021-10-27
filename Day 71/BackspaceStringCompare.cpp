class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;
        // iterating on s string
        for(auto c: s){
            // if c is not hashtag
            if(c!='#'){
                // push it into stack
                s1.push(c);
            }
            else{
                // if c is hashtag and stack is not empty
                if(c == '#' && !s1.empty()){
                    // we remove a top char
                    s1.pop();
                }
                else continue;
            }
        }
        // iterating on t string
        for(auto c: t){
            // if c is not hashtag
            if(c!='#'){
                // push it into stack
                s2.push(c);
            }
            else{
                // if c is hashtag and stack is not empty
                if(c == '#' && !s2.empty()){
                    // we remove a top char
                    s2.pop();
                }
                else continue;
            }
        }
        
        // if size is diffrent of both stack
        if(s1.size() != s2.size()){
            return false;
        }
        // if size is same
        while(s1.empty()==false){
            // comparing each char of both stack
            if(s1.top() == s2.top()){
                s1.pop();
                s2.pop();
            }
            // if they diffrent we return false
            else return false;
        } 
        return true;
    }
};