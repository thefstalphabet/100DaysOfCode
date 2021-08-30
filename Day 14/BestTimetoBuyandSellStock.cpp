class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxrate = 0; // maximum rate to buy stock
        int minirate = prices[0]; // minmum rate to but stock
        for(int i=1; i<prices.size(); i++){
            minirate = min(minirate, prices[i]);
            maxrate = max(maxrate, prices[i] - minirate);
        }
        return maxrate;
    }
};