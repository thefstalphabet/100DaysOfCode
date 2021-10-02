// THE BRUTE FORCE APPOROCH
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]==0 && nums[j]!=0){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
}

// THE OPTIMAL APPOROCH
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        // Iterating over array
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {           
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};