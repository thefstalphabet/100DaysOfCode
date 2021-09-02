class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // sorting the vector
        int count = 0; // count is for to count the element
        int n = nums.size();    
        for (int i=0; i<n; i++){
            if (i==0 || nums[i]==nums[i-1]){
                count++;
                if(count == ((n/2)+1)){
                    count = nums[i];
                    break;
                }
            }
            else count=1;
        }
        return count;
    }
};