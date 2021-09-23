class Solution {
public:
    bool isPowerOfThree(int n) {
        // if n is 0 or 1 return false
        if(n == 0) return false;
        if(n == 1) return true;
        // dividing n from 3 till we wouldn't geeting moduler as 0
        while(n%3==0){
           n = n/3;
        }
        // checking if n totaly divided by 3
        if(n==1) return true; 
        // if it is not divided totally than return 0
        else return false;        
    }
};