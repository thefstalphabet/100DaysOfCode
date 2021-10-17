class Solution {
public:
    string customSortString(string order, string s) {
        // map to store char and their freq of s
        unordered_map<char, int>mp;
        for(auto ele:s) mp[ele]++;
        
        string ans;
        for(auto ele:order){
            while(mp[ele]>0){
                ans.push_back(ele);
                mp[ele]--;
            }
        }
        for(auto pr:mp)
            while(pr.second > 0){
                ans.push_back(pr.first);
                pr.second--;
            }   
     return ans;
    }
};