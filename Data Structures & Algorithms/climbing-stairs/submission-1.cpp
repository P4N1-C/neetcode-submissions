class Solution {
public:
    int climbStairs(int n) {
    //      1 2 3 4 5 6 7 8 9
    //    1 1 1 1 1 1 1 1 1 1
    //    2 1 2 
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        for(int i = 1; i <= n; i++) {
            if(i - 1 >= 0) dp[i] += dp[i - 1];
            if(i - 2 >= 0) dp[i] += dp[i - 2];
        }
        return dp[n];
    }
};
