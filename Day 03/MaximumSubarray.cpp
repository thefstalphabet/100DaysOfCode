class Solution {
public:
    int maxSubArray(vector<int>& nums) { 
        int maxsum = nums[0]; //maxsum which store maximum sum
        int sum = 0; // sub array sum
        for (int i=0; i<nums.size(); i++){
            sum +=nums[i];
            if(sum>maxsum){
                maxsum=sum;
            }
            if(sum<0){
                sum=0;
            }  
        }
        return maxsum;
    }    
};