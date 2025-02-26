class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        // int n=nums.size();
        // int maxSum=INT_MIN;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(abs(sum)>maxSum)
        //             maxSum=abs(sum);
        //     }
        // }
        int minSum=INT_MIN,maxSum=INT_MIN;
        int curMinSum=0,curMaxSum=0;
        for(auto n:nums){
            curMaxSum+=n,curMinSum+=(-n);
            maxSum=max(maxSum,curMaxSum);
            minSum=max(minSum,curMinSum);
            if(curMaxSum<0) curMaxSum=0;
            if(curMinSum<0) curMinSum=0;
        }
        return max(minSum,maxSum);
    }
};