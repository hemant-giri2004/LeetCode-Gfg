class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]>nums[right])   //mid bda toh min right m hoga.
                left=mid+1;
            else if(nums[mid]<nums[right])  //mid chota h toh min left m hoga.
                right=mid;
            else    //mid and right are equal it means, we need to reduce the search space.
                right--;
        }
        return nums[right];
    }
};