class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0; // starting point
        int e = nums.size()-1; // ending point
        int m; // middle point
        while(s<=e){
            m = s+(e-s)/2; // finding middle
            if (nums[m]==target){
                return m;
            }
            else if (nums[m]<target){
                s=m+1;
            }
            else {
                e=m-1;
            }
        }
        return s;
    }
};