// IN THIS QUESTION WE ARE USING 
// RECURSION AND BACKTRACKING
class Solution {
public:
    // to store valid combination
    vector<string> valid;
    
    // &currString is where we store opening and closing valid paranthisis
    // cntOpen is the number of opening pranthisis
    // cntClosing is the number of Closing pranthisis
    void generate(string &currString, int cntOpen, int cntClose){
        
        //base condition
        // when we dont have the char we return
        if(cntOpen==0 && cntClose==0){
            valid.push_back(currString);
            return;
        }
        // if we have opening
        if(cntOpen>0){
            currString.push_back('(');
            generate(currString, cntOpen-1, cntClose);
            currString.pop_back(); // back track
        }
        // if we have closing
        if(cntClose>0){
            if(cntOpen < cntClose){
                currString.push_back(')');
                generate(currString, cntOpen, cntClose-1);
                currString.pop_back(); // back track
            }
        }
    }
    
    vector<string> generateParenthesis(int n) {
        string s;
        generate(s, n, n);
        return valid;
    }  
};