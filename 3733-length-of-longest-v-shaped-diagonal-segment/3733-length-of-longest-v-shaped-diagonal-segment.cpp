class Solution {
public:
    vector<vector<int>> direction = {{1, 1}, {1, -1}, {-1, -1}, {-1, 1}};
    int m,n;
    int dp[501][501][4][2];
    int solve(int i, int j, int d, bool canTurn, int val,vector<vector<int>>& grid){
        int i_=i+direction[d][0];
        int j_=j+direction[d][1];

        if(i_<0 || i_>=m ||j_<0 ||j_>=n || grid[i_][j_]!=val){
            return 0;
        }
        if(dp[i_][j_][d][canTurn]!=-1){
            return dp[i_][j_][d][canTurn];
        }
        int result=0;
        int keepMoving=1+solve(i_,j_,d,canTurn,val==2?0:2,grid);
        result=max(result,keepMoving);
        
        if(canTurn==true){
            int turnAndMove=max(keepMoving,1+solve(i_,j_,(d+1)%4,false,val==2?0:2,grid));
            result=max(result,turnAndMove);
        }

        return dp[i_][j_][d][canTurn]=result;
    }

    int lenOfVDiagonal(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        memset(dp,-1,sizeof(dp));
        int result = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    for (int d = 0; d <= 3; d++) {
                        result = max(result, 1 + solve(i, j, d, true, 2, grid));
                    }
                }
            }
        }
        return result;
    }
};