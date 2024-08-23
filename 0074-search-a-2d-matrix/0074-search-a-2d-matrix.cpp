class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();    //no of rows
        int c=matrix[0].size(); //no of columns
        int n=r*c;              //total element
        int s=0,e=n-1;          //start and end index
        while(s<=e){
            int m=s+(e-s)/c;    //middle index 1D vector
            int ri=m/c;         //row index for 2D vector
            int ci=m%c;         //column index for 2D vector 
            int ce=matrix[ri][ci];  //current element or we can say middle element
            if(target==ce)
                return true;
            else if(target>ce)
                s=m+1;
            else
                e=m-1;
        }
        return false;
    }
};