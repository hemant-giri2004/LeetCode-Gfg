class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int cntNeg=0,minAbs=INT_MAX;
        long long sum=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]<0)
                    cntNeg++;
                sum+=abs(matrix[i][j]);
                minAbs=min(minAbs,abs(matrix[i][j]));
            }
        }
        if(cntNeg%2!=0)
            return sum-2*minAbs;
        return sum;
    }
};