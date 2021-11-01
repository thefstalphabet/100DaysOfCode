class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us(nums1.begin(), nums1.end());
        nums1.clear();
        for(auto ele: us){
            if(find(nums2.begin(), nums2.end(), ele)!=nums2.end()){
                nums1.push_back(ele);
            }
        }
        return nums1;
    }
};