class Solution {
public:
    int climbStairs(int n) {
        // taking a n+1 length of array
        int temp[n+1];
        // where we asign the 0th and ith index with 1
        temp[0] = 1, temp[1] = 1;
        // iterating from the 2nd to n 
        for(int i = 2; i <= n; i++)
            temp[i] = temp[i-1] + temp[i-2];
        // returning the last element of ans array
        return temp[n];
    }
};