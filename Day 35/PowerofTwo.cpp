class Solution {
public:  
    bool isPowerOfTwo(int n) {
        //base cases 
        if(n==1) return 1; // if n is 1 then return true
        if(n==2) return 1; // if n is 2 then return true
        // when n is greater tahn 2 and it is even then dividing it from 2
        while(n>=2 && n%2==0){
            n = n/2;
        }
        // checking if n totaly divided by 2 
        if(n==1) return 1;
        // if it is not divided totally than return 0
        else return 0;
    }
};