// BRUT FORCE APPOROACH **********
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         int n = nums.size(); // size of nums
//         // vector to store all maxi
//         vector<int> res;
//         // loop iterating over nums
//         for (int i=0; i<=n-k; i++){
//             // current max of sub array we have already stored the first element of sub array
//             int curr_maxi = nums[i];
//             // iterating over sub array
//             for(int j=i; j<=i+k-1; j++){
//                  // checking the max element of sub array
//                 if(curr_maxi<nums[j]){
//                     curr_maxi = max(curr_maxi, nums[j]);
//                 }
//             }
//             // pushing in result array the maxi of sub array
//             res.push_back(curr_maxi);
//         }
//         return res;
//     }
// };

// MOST OPTIMAL SOLUTION **********
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size(); // size of the nums array
        deque<int> dq; // conatiner deque
        vector<int> res; // container to store the maxi of sub array
        // iterating over the nums array
        for(int i=0; i<n; i++){
            // if dq is not empty
            // or if dq of front is out of current checking sub array
            // then we pop it out from dq
            if(!dq.empty() && dq.front() == i-k)
            {
                dq.pop_front();
            }
            // if dq is not empty
            // or checking if all the element that dq have is smaller than nums[i]
            // then we pop that elements from dq
            while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
            }
            // after pop all the element from dq that is smaller than nums[i]
            // we push nums[i] in dq
            dq.push_back(i);
            
            // if our current i is equal than k-1 
            // it means our first sub array
            // then we store the maximum in the res conatiner
            if(i>=k-1){
                res.push_back(nums[dq.front()]);
            }
        }
        return res;
    }
};