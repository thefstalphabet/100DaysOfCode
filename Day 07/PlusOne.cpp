class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // size of the array
        int last = digits.size();
        // a loop runs from last index to 0 index of array
        for (int i=last-1; i>=0; i--){
//             checking digits of i is not equal to 9
            if(digits[i]!=9){
                // increment element of digits
                digits[i]++;
                break;
            }
            else digits[i]=0;
            
            // if digits first element is zero
            if(digits[0]==0){
                // created another array +1 of digits array
                vector<int> res(last+1, 0);
                res[0]=1;
                return res;
            }
            
        }
        return digits;
    }
};