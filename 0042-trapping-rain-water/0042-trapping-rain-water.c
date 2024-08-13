
int trap(int* height, int heightSize) {
    int l[heightSize],r[heightSize];
    int i,min=0,max,sum=0;
    max=height[0],l[0]=height[0];
    //calculate max height in left side.
    for(i=1;i<heightSize;i++){
        if(max<height[i])
            max=height[i];
            l[i]=max;
    }
    //calculate max height in right side.
    max=height[heightSize-1],r[heightSize-1]=height[heightSize-1];
    for(i=heightSize-2;i>=0;i--){
        if(max<height[i])
            max=height[i];
            r[i]=max;
    }
    //sum-> diff(min(left,right)-height)
    for(i=0;i<heightSize;i++){
        min = l[i] < r[i] ? l[i] : r[i];
        sum=sum+min-height[i];
    }
    return sum;
}