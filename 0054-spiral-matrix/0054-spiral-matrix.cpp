class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int t=0,b=matrix.size()-1,l=0,r=matrix[0].size()-1;
        int e=matrix.size() * matrix[0].size();
        vector<int>sp;
        while(e){
            for(int i=l;i<=r&&e;i++){
                sp.push_back(matrix[t][i]);
                e--;
            }
            t++;
            for(int i=t;i<=b&&e;i++){
                sp.push_back(matrix[i][r]);
                e--;
            }
            r--;
            for(int i=r;i>=l&&e;i--){
                sp.push_back(matrix[b][i]);
                e--;
            }
            b--;
            for(int i=b;i>=t&&e;i--){
                sp.push_back(matrix[i][l]);
                e--;
            }
            l++;
        }    
        return sp;
    }
};