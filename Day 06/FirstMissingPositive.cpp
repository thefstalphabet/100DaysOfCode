class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // sorting the array
        sort(nums.begin(), nums.end());
        // init the smallest value
        int small = 1;
        // loop runs from 0 to size of array
        for (int i=0; i<nums.size(); i++){
            // checking if small is eaqul than nums of i
            if (nums[i] == small){
                small++;
            }
        }
        return small;
    }
};