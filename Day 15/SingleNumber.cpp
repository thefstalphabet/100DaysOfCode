class Solution {
public:
    int singleNumber(vector<int>& nums) { 
        sort(nums.begin(), nums.end()); // shorting the vector
        int n = nums.size()-1; // the size of the vector
        int sum = 0; // ans variable
        // when vector have one element
        if(nums.size()==1){
            return nums[0];
        }
        for (int i=0; i<=n; i++){
            if (nums[i] != nums[i+1]){
                sum = nums[i];
            }
            else if(nums[i] == nums[i+1]){
                sum += 0;
                i++;
            }
        }
        return sum;
    }
};