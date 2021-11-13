class Solution {
public:
    bool judgeSquareSum(int c) {
        long int left = 0;
        long int right = sqrt(c);
        while(left <= right){
            long temp = left*left + right*right;
            if(temp > c){
                right--;
            }
            else if(temp < c){
                left ++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};