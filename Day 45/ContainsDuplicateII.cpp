class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // map which store the element and their index
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            // if we find the element present in map and its sub of indxes is equal and less than k
            if(mp.find(nums[i]) != mp.end() and (i - mp[nums[i]] <= k))
                return true;
            // storing element and index
            mp[nums[i]] = i;
        }
        
        return false;
    }
};