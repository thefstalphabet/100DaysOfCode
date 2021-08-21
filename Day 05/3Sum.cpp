class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // sortef the array
        int n = nums.size(); // length of array
        vector<vector<int>> result; // A vector to store result
        
        if(n<3) return {};
        for(int i=0; i<n-2; i++){
            // checking if a is noy equal from previous element
            if( i==0 || nums[i]!= nums[i-1]){
                // init j and k
                int j = i+1, k = n-1;
                // checking if j is less than k then this loop will break
                while(j<k){
                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum==0){
                        // pushing to the result vector when we get the triblet
                        result.push_back({nums[i], nums[j], nums[k]});
                        while(j<k && nums[j] == nums[j+1]) j++;
                        while(j<k && nums[k] == nums[k-1]) k--;
                        j++;
                        k--;
                    }
                    else if(sum>0){
                        k--;
                    }
                    else j++;
                }
            }
        }
        return result;
    }
};