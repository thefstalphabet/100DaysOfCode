// O(N2) Solution
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(temperatures[j] > temperatures[i]){
                    ans.push_back(abs(i-j));
                    break;
                }
                else if(temperatures[i] >= temperatures[j] && j==n-1){
                    ans.push_back(0);
                }
            }
            if(i==n-1){
                ans.push_back(0);
            }
        }
        return ans;
    }
};

// O(N) Solution
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        vector<int> res(nums.size(),0); // to store answer
        stack<int> st;
        for(int i=0; i<nums.size(); i++){
            // when we found a greater temp
            while(!st.empty() && nums[i]>nums[st.top()]){
                // calculating days
                res[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return res;
    }
};