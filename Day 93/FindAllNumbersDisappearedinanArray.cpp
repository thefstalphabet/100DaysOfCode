// Using Hash Map
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>ump;
        vector<int>ans;
        for(auto &i :nums){
            ump[i]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(ump[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

// Using Vector | optimal algo
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        vector<int>appear(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            appear[nums[i]-1]=1;
        }
        for(int i=0;i<appear.size();i++){
            if(appear[i]==0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};