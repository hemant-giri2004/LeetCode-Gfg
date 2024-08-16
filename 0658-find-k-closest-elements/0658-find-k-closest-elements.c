/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findClosestElements(int* arr, int arrSize, int k, int x, int* returnSize) {
    int l=0,h=arrSize-1;
    while((h-l)>=k){
        if((x-arr[l])>(arr[h]-x))
            l++;
        else
            h--;
    }
    int *ans=(int *)malloc(k*sizeof(int));
    int i=0;
    for(int j=l;j<=h;j++)
        ans[i++]=arr[j];
    *returnSize=k;
    return ans;
}