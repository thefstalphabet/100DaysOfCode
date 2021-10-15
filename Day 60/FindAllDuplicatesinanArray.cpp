class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int>ump;
        for(auto ele: nums) ump[ele]++;
        nums.clear();
        for(auto pr: ump){
            if(pr.second>=2){
                nums.push_back(pr.first);
            }
        }
        return nums;
    }
};