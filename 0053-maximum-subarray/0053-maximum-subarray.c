int maxSubArray(int* nums, int numsSize) {
    int sum=0;
    int maxSum=nums[0];
    for(int i=0;i<numsSize;i++){
        sum=sum+nums[i];
        maxSum=(maxSum>sum)?maxSum:sum;
        if(sum<0)
            sum=0;
    }
    return maxSum;
}