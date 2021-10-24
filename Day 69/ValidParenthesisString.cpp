class Solution {
public:
    bool checkValidString(string s) {
        // stack to store the indexes of opening bracket
        stack<int> openPar;
        // stack to store the indexex of star
        stack<int> stars;
        // iterating on s str
        for(int x=0; x<s.size(); ++x){
            char c = s[x];
            if(c == '(') openPar.push(x);
            else if(c == '*') stars.push(x);
            // when c is closing bracket
            else{
                if(!openPar.empty())
                    openPar.pop();
                else if(!stars.empty())
                    stars.pop();
                else return false;
            }
        }
        // we handled all opening bracket in last loop
        // now pairing closing brakets that are left
        while(!openPar.empty()){
            // if there is no star then we would not able to make pair
            if(stars.empty()) return false;
            else if(openPar.top() < stars.top()){
                openPar.pop();
                stars.pop();
            }
            else return false;
        }
        return true;
    }
};