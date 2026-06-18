class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxi = prices[n - 1]; 
        int ans = INT_MIN;
        for(int i = n - 1; i >= 0; i--) {
            ans = max(maxi - prices[i], ans);
            maxi = max(maxi, prices[i]);
        }
        return ans;
    }
};
