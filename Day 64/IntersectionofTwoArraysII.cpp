class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // result vector
        vector<int> res;
        // iterating on nums1 vector
        for(int i=0; i<nums1.size(); i++){
            // finding the same element
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            // if we find it, pushing it into result vector
            if(it!=nums2.end()){
                res.push_back(nums1[i]);
            }
        }
        return res;
    }
};