class Solution {
public:
    //create helping function.
    void swap(int *a,int *b){
        int t=*a;
        *a=*b;
        *b=t;
    }
    void rotate(vector<vector<int>>& matrix) {
        // step-1 Transpose
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                swap(&matrix[i][j],&matrix[j][i]);
            }
        } 
        // step -2 Reverse Rows
        for(int i=0;i<matrix.size();i++){
            int j=0,k=matrix[i].size()-1;
            while(j<=k){
                swap(&matrix[i][j],&matrix[i][k]);
                j++,k--;
            }
            
        } 
    }
};