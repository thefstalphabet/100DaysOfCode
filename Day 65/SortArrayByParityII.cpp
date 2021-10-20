class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0, j=1;
        //here i is even and j is odd hence nums[i] should be even and nums[j] should be odd
        while(i<nums.size() && j<nums.size()){
            // If nums[i] is even increment by 2 
            if(nums[i]%2==0) i+=2;
              // If nums[j] is odd increment by 2 
            if(nums[j]%2!=0) j+=2;
            // if nums[i] is odd and nums[j] is even-> swap both 
            else if(nums[i]%2!=0 && nums[j]%2==0){
               swap(nums[i],nums[j]);
               i+=2, j+=2;
           }
        }
        return nums;
    }
};