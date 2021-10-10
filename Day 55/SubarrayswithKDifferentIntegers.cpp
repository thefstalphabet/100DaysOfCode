// BRUTE FORCE APPROACH
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int res = 0;
        set<int> st;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                for(int x=i; x<=j; x++){
                    st.insert(nums[x]);
                }
                if(st.size()==k) res++;
                st.clear();
            }
        }
        return res;
    }
};

// OPTIMAL APPROACH
class Solution {
private:
    int slidingWindow(vector<int> &nums, int k){
        unordered_map<int, int> ump;
        int answer = 0;
        // left pointer
        int left = 0; 
        // iterating on nums array
        for(int right = 0; right < nums.size(); right++){
            ump[nums.at(right)]++;
            
            while(ump.size() > k){
                ump[nums.at(left)]--;
                if(ump[nums.at(left)] == 0) ump.erase(nums.at(left));
                left++;
            }
            answer += right - left + 1;
        }
        return answer;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return slidingWindow(nums, k) - slidingWindow(nums, k - 1);
    }
};