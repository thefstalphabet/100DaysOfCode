class Solution {
public:
    int hammingDistance(int x, int y) {
        int XOR = x^y;
        int ans = 0; // count of diffrent bits
        while(XOR){
            ans += XOR & 1;
            XOR >>= 1;
        }
        return ans;
    }
};