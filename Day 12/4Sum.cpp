class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); // sorting the vector
        int n = nums.size(); // size of nums vector
        vector<vector<int>> res; // a 2D vector
        for (int i=0; i<n-3; i++){
            if(i>0 && nums[i]==nums[i-1]){ // checking if i is not equal than previous one
                continue; // if it is than continue the loop
            }
            for(int j=i+1; j<n-2; j++){ // checking if f is not equal than previous one
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue; // if it is than continue the loop
                }
                int targetSum = target-(nums[i]+nums[j]);        
                int left = j+1, right = n-1;    // left and right pointer       
                while(left<right){
                    if (targetSum == nums[left]+nums[right]){
                        // if it is equal then pushing it into result 2d vector
                        res.push_back({nums[i],nums[j],nums[left],nums[right]});
                        // checking if left and right is not equal to the previous elements
                        // if it is then ignoring
                        while(left<right && nums[left]==nums[left+1]) left++;
                        while(left<right && nums[right]==nums[right-1]) right--;
                        left++;
                        right--;
                    }  
                    else if ((nums[left]+nums[right])<targetSum) left++;
                    else right--;
                }              
            }             
        }
        return res;
    }
};