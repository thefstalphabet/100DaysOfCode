class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // a loop runs from m to m+n
        for(int i = m; i < m+n; i++){
            nums1[i] = nums2[i-m];
        };
        // sorting nums1
        sort(nums1.begin(),nums1.end());
    }
};