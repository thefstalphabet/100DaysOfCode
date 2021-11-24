class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        // min heap
        priority_queue<int, vector<int>, greater<int>> pq;
        // storing the ele on min heap
        for(auto ele: nums) pq.push(ele);
        // performing the k operation
        while(k--){
            int top = pq.top();
            pq.pop();
            //pushing the negative ele
            top *= -1;
            pq.push(top);
        }
        // storing the sum of all the ele
        int sum = 0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};