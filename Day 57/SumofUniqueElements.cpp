class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> ump;
        int ans = 0;
        for(auto ele: nums){
            ump[ele]++;
        }
        for(auto pr: ump){
            if(pr.second>=2){
                ans+=0;
            }
            else{
                ans+=pr.first;
            }
        }
        return ans;
    }
};