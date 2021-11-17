class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // occurance
        int occ = nums.size()/3;
        unordered_map<int,int> ump;
        for(auto ele: nums) ump[ele]++;
        // clearing the array to store ans
        nums.clear();
        for(auto pr: ump){
            if(pr.second>occ){
                nums.push_back(pr.first);
            }
        }
        return nums;
    }
};