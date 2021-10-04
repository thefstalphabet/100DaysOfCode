class Solution {
public:
    bool isHappy(int n) {
        // sum of square root of every digits
        long long int sum = 0;
        // a map
        unordered_map<int,int> mp;
        // looping
        while(1){
            // every tie we start a loop init sum as zero
            sum = 0;
            // calculating the square of every digits of n
            while(n){
                sum+=pow(n%10,2);
                n=n/10;
            }
            // sum as n
            n=sum;
            // inserting the sum in map
            mp[sum]++;
            if(mp[sum]>=2) return false;
            if(sum==1) return true;
        }
    }
};