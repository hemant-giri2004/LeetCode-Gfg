double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    int sort[nums1Size+nums2Size];
    int i=0,j=0,k=0;
    while (j < nums1Size && k < nums2Size){       
        
        if (nums1[j] < nums2[k])
            sort[i++] = nums1[j++];
        else
            sort[i++] = nums2[k++];
    }
    while (j < nums1Size) 
        sort[i++] = nums1[j++];
    while (k < nums2Size)
        sort[i++] = nums2[k++];

    int mid=i/2;
    if(i%2==0)  return (double)(sort[mid]+sort[mid-1])/2;
    else    return (double)sort[mid];   
}
