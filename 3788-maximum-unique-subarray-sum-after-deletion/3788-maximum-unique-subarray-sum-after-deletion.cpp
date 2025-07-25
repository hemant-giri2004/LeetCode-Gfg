class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<int > st(101,-1);
        int sum=0;
        int maxNeg=INT_MIN;

        for(auto &n :nums){
            if(n<=0){
                maxNeg=max(maxNeg,n);
            }else if (st[n]==-1){
                sum+=n;
                st[n]=1;
            }
        }

        return (sum==0)?maxNeg:sum;
    }
};