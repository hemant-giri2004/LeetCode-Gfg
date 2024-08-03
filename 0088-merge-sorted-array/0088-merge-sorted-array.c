void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int mer[nums1Size];
    int i=0,j=0,k=0;
    while(j<m && k<n)
        if(nums1[j]<nums2[k])
            mer[i++]=nums1[j++];
        else
            mer[i++]=nums2[k++];
    while(j<m)
        mer[i++]=nums1[j++];
    while(k<n)
        mer[i++]=nums2[k++]; 
    for(i=0;i<nums1Size;i++)
        nums1[i]=mer[i];  

}