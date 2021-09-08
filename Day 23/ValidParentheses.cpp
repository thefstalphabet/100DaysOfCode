class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<int> st;
        
        // loop runing thought stack
        for(int i=0; i<n; i++){
            // if it is an opening tag
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]); // pushing it into the stack
            }
            // if it is not a opening tag
            else{
                // if stack is empty
                if(st.empty()){
                    // then we dont find the opening tag for the closing tag
                    return 0; 
                }
                // if stack is not empty then
                else{
                    // taking the top char of stack so we can compare it from the closing one
                    char c = st.top();
                    // poping the top char from stack
                    st.pop();
                    
                    // if that opening char is matched from these closing tag then we retun true
                    if((c=='(' && s[i]==')') || (c=='{' && s[i]=='}') || (c=='[' && s[i]==']')){
                        return 1;
                    }
                    // if not then returning false
                    else{
                        return 0;
                    }
                }
            }
        }
        // if after all the processes the stack is empty then we return true
        if(st.empty()){
            return 1;
        }
        // otherwise returning false
        return 0;
    }
};