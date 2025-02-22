class Solution {
public:
    int bruteMethod(int n){
        if(n<=2)    return n;   //if base case return value.
        //otherwise explore for subproblems.
        return bruteMethod(n-1)+bruteMethod(n-2);   
    }
    int memo(int n,vector<int> &dp){
        //if base case return val.
        if(n<=2) return n;
        //check if already explore return val.
        if(dp[n]!=0)    return dp[n];  
        //explore the new case and store for future 
        dp[n]=memo(n-1,dp)+memo(n-2,dp);  
        //return the current solution.
        return dp[n];
    }
    int climbStairs(int n) {
        //brute force
        // return bruteMethod(n);

        // memorization (Top to down dp)
        vector<int> dp(n+1,0);
        return memo(n,dp);

        // //tabulation (bottom to up) 
        // //on leetcode this not useful due to loop constraint.
        // vector<int> dp(n+1,0);
        // //inital value or ways. 
        // dp[1]=1;
        // dp[2]=2;
        // //bottom to up.
        // for(int i=3;i<=n;i++){  
        //     dp[3]=dp[i-1]+dp[i-2];
        // }
        // return dp[n];
    }
};