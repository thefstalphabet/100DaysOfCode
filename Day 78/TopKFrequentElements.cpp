class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // storing ele and their freq
        unordered_map<int,int>ump;
        for(int i=0; i<nums.size(); i++) ump[nums[i]]++;
        
        // vector to store ans
        vector<int> ans;
        priority_queue<pair<int, int>> pq;
        for(auto pr : ump) pq.push({pr.second , pr.first});
        
        // pushing k elements
        // those have highest freq
        int x = 0;
        while(x<k){
            ans.push_back(pq.top().second);
            pq.pop();
            x++;
        }
        return ans;
    }
};