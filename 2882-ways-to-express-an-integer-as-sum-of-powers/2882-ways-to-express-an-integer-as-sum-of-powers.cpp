class Solution {
public:
    int M=1e9+7;
    int dp[301][301];
    int solve(int n, int i, int&x){
        if (n==0)   
            return 1;//1 PATH EXISTS.
        if (n<0)    
            return 0;

        int currPower=pow(i,x);
        if(currPower>n)
            return 0;
        
        if(dp[n][i] != -1)
            return dp[n][i];
        int take=solve(n-currPower,i+1,x);
        int skip=solve(n,i+1,x);
        return dp[n][i]=(take+skip)%M;
    }
    int numberOfWays(int n, int x) {
        memset(dp,-1,sizeof(dp));
        return solve(n,1,x);
    }
};