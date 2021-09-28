class Solution {
public:
    bool isPalindrome(int x) {
        // base case
        if(x<0) return false;
        // vector to store all the digits
        vector<int> digi;
        // storing digits to vector
        while(x){
            digi.push_back(x%10)  ;  
            x=x/10;
        }
        // iterating over half length of vector
        for(int i=0; i<digi.size()/2; i++){
            if(digi[i] == digi[digi.size()-1-i]){
                continue;
            }
            else return false;
        }
        return true;
    }
};