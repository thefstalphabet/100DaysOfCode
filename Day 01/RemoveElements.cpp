class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // a count var
        int count = 0;
        // if nums size is zero then it will return 0
        if(nums.size()==0){ 
            return 0;
        }
        // a loop runs from 0 to size of nums
        for(int i= 0; i<nums.size(); i++){
            // checking if nums is not equal to val or not
            if(nums[i]!=val){
                nums[count++]=nums[i];
            }
        }
        return count;
          
    }
};