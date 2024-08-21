class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxSum=0;
        for(int i=0;i<k;i++)
            maxSum+=nums[i];
        int sum=maxSum;
        for(int i=1;i<=nums.size()-k;i++){
            sum=sum-nums[i-1]+nums[k-1+i];
            if(sum>maxSum)
                maxSum=sum;
        }
        return (double)maxSum/k;
    }
};