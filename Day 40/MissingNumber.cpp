class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(); // nums length
        int sum = n*(n+1)/2; // sum of all the n num 
        // iterating over the nums
        for(int i=0; i<n; i++){
            sum -= nums[i]; // subtrating all element from the sum
        }
        return sum;
    }
};