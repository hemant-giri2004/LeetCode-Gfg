int missingNumber(int* nums, int numsSize) {
    long s1=0;
    for(int i=0;i<numsSize;i++)
        s1+=nums[i];
    long s2=numsSize*(numsSize+1)/2;
    return s2-s1;
}