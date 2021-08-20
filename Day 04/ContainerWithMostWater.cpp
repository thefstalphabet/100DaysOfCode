#include<algorithm>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int result = 0;
        while(left<right){
            int area;
            if(height[left] < height[right]){
                area = height[left] * (right-left);
                left++;
            }
            else{
                area = height[right] * (right-left);
                right--;
            }
            if(area > result){
                result = area;
            }
        }
        return result;
    }
};