class Solution {
public:

    void solve(vector<vector<int>>& mat, int i, int j,int prev,vector<vector<int>>& ocean){
        if(i<0 || j<0|| i>=mat.size() || j>=mat[0].size())
            return;
        if(ocean[i][j]==1)
            return;
        if(mat[i][j]<prev)
            return;
        ocean[i][j]=1;
        solve(mat,i+1,j,mat[i][j],ocean);
        solve(mat,i-1,j,mat[i][j],ocean);
        solve(mat,i,j+1,mat[i][j],ocean);
        solve(mat,i,j-1,mat[i][j],ocean);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& mat) {
        vector<vector<int>> ans;
        if(mat.size()<1)    return ans;
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> pec(n,vector<int>(m,0));
        vector<vector<int>> atl(n,vector<int>(m,0));

        for(int c=0;c<m;c++){
            solve(mat,0,c,INT_MIN,pec);
            solve(mat,n-1,c,INT_MIN,atl);
        }
        for(int r=0;r<n;r++){
            solve(mat,r,0,INT_MIN,pec);
            solve(mat,r,m-1,INT_MIN,atl);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(pec[i][j]==1 && atl[i][j])
                    ans.push_back({i,j});
            }
        }
        return ans;
    }
};