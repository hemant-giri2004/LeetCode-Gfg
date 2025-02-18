class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxWater=0;
        // //brute force 
        // for(int i=0; i<n; i++){
        //     for(int j=i+1;j<n;j++){
        //         int width=j-i;
        //         int ht =min(height[i],height[j]);
        //         int water=width*ht;
        //         maxWater=max(water,maxWater);
        //     }    
        // }

        //two pointer apporach
        int lb=0,rb=n-1;
        while(lb<rb){
            int width=rb-lb;
            int ht=min(height[lb],height[rb]);
            int water=ht*width;
            maxWater=max(water,maxWater);
            // Move the pointer pointing to the shorter height
            if (height[lb] < height[rb]) {
                lb++;
            } else {
                rb--;
            }
        }
        return maxWater;
    }
};