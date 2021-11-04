class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int min = INT_MAX, temp1 = 0;
        int max = INT_MIN, temp2 = 0;
        int allEleSum = 0;
        for(auto ele : nums) {
            allEleSum += ele; // sum of all elements

            // maximum sum by kadans algo
            temp1 += ele;
            if(temp1 > max) max = temp1;
            if(temp1 < 0) temp1 = 0;

            //minimum sum by kadans algo
            temp2 += ele;
            if(temp2 < min) min = temp2;
            if(temp2 > 0) temp2 = 0;
        }
        if(max < 0){
            return max;
        }
        else if(max > allEleSum-min){
            return max;
        }
        else{
            return allEleSum-min;
        }    
    }
};