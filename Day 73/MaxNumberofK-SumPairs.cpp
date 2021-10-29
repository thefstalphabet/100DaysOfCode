class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int i=0, j=nums.size()-1, ans=0;
        sort(nums.begin(), nums.end());
        while(i<j){
            int curr = nums[i]+nums[j];
            if(curr>k) j--;
            else if(curr<k) i++;
            else{
                ans++;
                i++, j--;
            }
        }
        return ans;
    }
};