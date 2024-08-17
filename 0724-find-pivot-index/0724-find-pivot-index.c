int pivotIndex(int* nums, int numsSize) {
    int total=0,i,ls=0,rs;
    for(i=0;i<numsSize;i++)
        total+=nums[i];
    rs=total;
    for(i=0;i<numsSize;i++){
        rs-=nums[i];
        if(ls==rs)
            return i;
        ls+=nums[i];
        rs=total-ls;
    }
    return -1;
}