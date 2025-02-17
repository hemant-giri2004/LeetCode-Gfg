class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        // //brute force.
        // int min=nums[0];
        // for(int i=1;i<n;i++){
        //     if(min>nums[i])
        //         min=nums[i];
        // }
        // return min;

        //binary search algo.
        int left=0,right=n-1;
        while(left < right){
            int mid = left + (right - left ) / 2;
            if(nums[mid] > nums[right])
                left = mid + 1;
            else 
                right=mid;
        }
        //you can return both right or left because at end on the same index
        return nums[right]; 
    }
};