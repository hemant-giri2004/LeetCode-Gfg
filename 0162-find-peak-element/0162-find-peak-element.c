int findPeakElement(int* nums, int numsSize) {
    int l=INT_MIN,r;
    for(int i=0;i<numsSize;i++){
        if(i==numsSize-1)
            r=INT_MIN;
        else
            r=nums[i+1];
        if(l<nums[i] && r<nums[i])
            return i;
        l=nums[i];
    }
    return 0;
}