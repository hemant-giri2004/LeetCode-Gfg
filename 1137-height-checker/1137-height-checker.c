int heightChecker(int* heights, int heightsSize) {
    int n=0,count[101]={0},sort[heightsSize],i;
    for(i=0;i<heightsSize;i++)
        count[heights[i]]++;
    int j=0;
    for(i=0;i<101;i++)
        while(count[i]>0){
            sort[j]=i;
            count[i]--;
            j++;
        }
    for(i=0;i<heightsSize;i++)
        if(sort[i]!=heights[i]){
            n++;
            //printf("%d -%d %d ",i,sort[i],heights[i]);
        }
    return n;
}