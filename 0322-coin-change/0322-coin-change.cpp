class Solution {
public:
    int dp[10010];
    //brute force.
    // int fun(vector<int>& coins, int amount){
    //     if(amount == 0) return 0;

    //     int ans=INT_MAX;
    //     for(int coin:coins){
    //         if(amount >= coin){
    //             ans=min(ans + 0LL ,fun(coins,amount-coin) + 1LL);
    //         }
    //     }
    //     return ans;
    // }
    int fun(vector<int>& coins, int amount){
        if(amount == 0) return 0;
        if(dp[amount] !=-1) return dp[amount];
        int ans=INT_MAX;
        for(int coin:coins){
            if(amount >= coin){
                ans=min(ans + 0LL ,fun(coins,amount-coin) + 1LL);
            }
        }
        return dp[amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        //basic recusion.
        // int ans=fun(coins,amount);
        memset(dp,-1,sizeof(dp));
        int ans=fun(coins,amount);
        return ans==INT_MAX? -1:ans;
    }
};