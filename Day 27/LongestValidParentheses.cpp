class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size(); // size of string
        stack <int> index; // created an stack to store the indexes of ( ) 
        index.push(-1); // pushed -1 into top of stack
        int count = 0; // to store length
        // runs from 0 to length of string
        for (int i=0; i<n; i++){
            // if its an opening bracket we store thir index
            if(s[i]=='('){
                index.push(i);
            }
            // if it is not
            else{
                // we pop the index
                index.pop();
                // then we check if out stack is empty or not
                if(index.size()==0){
                    index.push(i); // pushing the index
                }
                // calculaing the length of sub valid string
                else{
                    count = max(count, i-index.top());
                }
            }
        }
        return count;
        
    }
};