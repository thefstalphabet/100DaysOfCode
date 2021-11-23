class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // when the len of array is 1
        if(nums.size()==1){
            return {nums}; // return a vector of vector
        }
        // to store permutations
        vector<vector<int>> res;
        for(int i=0; i<nums.size(); i++){
            // creating a clone of array
            vector<int> v(nums.begin(), nums.end());
            v.erase(v.begin() + i); // erasing the ith ele from array
            auto temp = permute(v); // calling the function
            for(int j=0; j<temp.size(); j++){
                vector<int> v2 = temp[j];
                v2.insert(v2.begin(), nums[i]);
                res.push_back(v2);
            }
        }
        return res;
        
    }
};