class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // map where we store the element and their appereance
        unordered_map<int, int> map;
        // iterating over the nums
        for(int i=0; i<nums.size(); i++){
            // if we find the element already presend in map
            if(map.find(nums[i]) != map.end()){
                // then simply return true
                return true;
            }
            // otherwise we input the element in map 
            else{
                map[nums[i]]++;
            }
        }
        return false;
    }
};