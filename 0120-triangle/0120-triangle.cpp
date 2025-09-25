class Solution {
public:
    int n;
    int dp[201][201];
    int solve(vector<vector<int>>& t,int r,int c){
        if(r==n-1)
            return  t[r][c];

        if(dp[r][c]!=INT_MAX)
            return dp[r][c];

        int minSum = t[r][c] + 
                     min(solve(t,r+1,c),
                         solve(t,r+1,c+1));
        return dp[r][c]=minSum;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        n=triangle.size();
        for (int i = 0; i < 201; i++) {
            for (int j = 0; j < 201; j++) {
                dp[i][j] = INT_MAX;
            }
        }
        return solve(triangle,0,0);
    }
};