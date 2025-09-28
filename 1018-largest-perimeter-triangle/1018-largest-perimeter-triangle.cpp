class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        // int maxPeri=0;
        // for(int i=0;i<n-2;i++){
        //     for(int j=i+1;j<n-1;j++){
        //         for(int k=j+1;k<n;k++){
        //             if((nums[i]+nums[j]>nums[k])&&(nums[i]+nums[k]>nums[j])&&(nums[k]+nums[j]>nums[i])){
        //                 int peri=nums[i]+nums[j]+nums[k];
        //                 maxPeri=max(peri,maxPeri);
        //             }
        //         }
        //     }
        // }
        // return maxPeri;
        sort(nums.begin(),nums.end());
        for(int i=n-3;i>=0;i--){
            if(nums[i]+nums[i+1]>nums[i+2])
                return nums[i]+nums[i+1]+nums[i+2];
        }
        return 0;
    }
};