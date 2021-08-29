class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(); // length of the array
        vector<int> left(n); // left array
        vector<int> right(n); // right array
        // for left array
        left[0] = height[0];
        for (int i = 1; i < n; i++) left[i] = max(left[i - 1], height[i]);
        // ffor right array
        right[n - 1] = height[n -1];
        for (int i = n - 2; i >= 0; i--) right[i] = max(right[i + 1], height[i]);
        // answer variable
        int res = 0;
        // for geeting the stored water
        for(int i=0; i<n; i++) res += min(left[i], right[i])-height[i];
        return res;
    }
};