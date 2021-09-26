// APPOROCH TO WHERE WE CREATE ONE TO STORE BOTH OF ARRAY ELEMENT **********
// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {  
//         // Combining the array both of array in one array
//         vector<int> vec;
//         for(int i=0; i<nums1.size(); i++){
//             vec.push_back(nums1[i]);
//         }
//         for(int i=0; i<nums2.size(); i++){
//             vec.push_back(nums2[i]);
//         }
//         sort(vec.begin(), vec.end());
        
//         /*
//         now we have two cases if num of element 
//         present in vec array is even or odd
//         */
        
//         float ans = 0; // to store ans
//         float middle = (vec.size()-1)/2.0; // middle of vec
//         // the odd case
//         if(vec.size()%2!=0){
//             ans = (float)vec[middle];
//         }
//         // the even case
//         else{
//             ans = (float)(vec[middle]+vec[middle+1])/2.0;
//         }
//         return ans;
        
//     }
// };

// OPTIMIZED SOLUTION **********
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {  
        
        for(auto x: nums2){
            nums1.push_back(x);
        }
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        /*
        now we have two cases if num of element 
        present in vec array is even or odd
        */
        
        float ans = 0; // to store ans
        int middle = (n-1)/2; // middle of vec
        // the odd case
        if(n%2!=0){
            ans = (float)nums1[middle];
        }
        // the even case
        else{
            ans = (float)(nums1[middle]+nums1[middle+1])/2.0;
        }
        return ans;
        
    }
};