class Solution {
public:
    int m,n;
    void sortDiagnal(int r,int c,vector<vector<int>>& grid,bool isAsc){
        int i=r;
        int j=c;
        vector<int> v;
        while(i<m && j<n){
            v.push_back(grid[i][j]);
            i++,j++;
        }

        if (isAsc) {
            sort(v.begin(), v.end());        // ascending
        } else {
            sort(v.rbegin(), v.rend());      // descending
        }

        i=r,j=c;
        for(auto val:v){
            grid[i][j]=val;
            i++,j++;
        }
    }
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();

        for(int row=0;row<m;row++){
            //sort the bottom trainge.
            sortDiagnal(row,0,grid,false);
        }
        for(int col=1;col<n;col++){
            //sort the top traingle.
            sortDiagnal(0,col,grid,true);
        }

        return grid;
    }
};