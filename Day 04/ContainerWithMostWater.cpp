class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0; //starting point of array
        int right = height.size()-1; // ending point of array
        int result = 0; // main result
        while(left<right){
            int area; //area where water store
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