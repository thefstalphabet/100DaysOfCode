class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int  n = nums.size(); // length of array
        int sum = 0; // all element sum
        for (int i=0;i<n;i++){
            sum += nums[i];
        }
        int leftSum = 0; // left sum
        int rightSum = sum; // right sum assign as all element sum
        for (int i=0;i<n;i++){
            rightSum -= nums[i];
            if(leftSum == rightSum){ 
                return i; // wen we find a match then return the i
                break; // break the loop and return ans
            }
            leftSum += nums[i];
        }
        return -1; 
    }
};