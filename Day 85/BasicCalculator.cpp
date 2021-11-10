class Solution {
    public:
    int calculate(string s) {            
        int result = 0; // where we store ans
        int sign = 1; // to store operator, default is positive
        stack<int> st;
        for(int i=0; i<s.size(); i++) {
            // ignoring the spaces
            if(s[i] == ' ') continue;
            // when its a number
            if(isdigit(s[i])) {
                int val = 0; // to store current number
                while(i<s.size() && isdigit(s[i])) {
                    val = val*10 + (s[i] - '0');
                    i++;
                }
                result+= (val*sign);
                i--;
            }
            else if(s[i] == '+') sign = 1;
            else if(s[i] == '-') sign = -1;
            else if(s[i] == '(') {    
                st.push(result);
                st.push(sign);   
                result = 0;
                sign = 1;
            }
            else {    
                result *= st.top();
                st.pop();
                result += st.top();
                st.pop();
            }
        }
        return result;
    }
};