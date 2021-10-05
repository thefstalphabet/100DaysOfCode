// BRUTE FORCE APPOROACH
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); ++i)
            for(int j=i+1; j<nums.size(); ++j)
                if(nums[i]==nums[j] && i<j) ans++;
        return ans;
    }
};

// OPTIMAL APPOROCH USING MAPS
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> mp;
        int ans = 0;
        // storing the ele of nums and their accurance
        for(int i=0; i<nums.size(); ++i)
            mp[nums[i]]++;
        // main logic
        for(auto pr: mp)
            ans+=(pr.second)*(pr.second-1)/2;
        return ans;
    }
};