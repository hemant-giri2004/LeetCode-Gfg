class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        // //brute force.
        // for(int i=0;i<n;i++){
        //     if(nums[i]==target)
        //         return i;
        // }
        // return -1;

        //using binary search.
        int low=0,high=n-1;
        while(low<=high){
            int mid = low + ( high - low)/2;
            if(nums[mid]==target)   return mid;
            //left part is sorted.
            if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target<=nums[mid]){
                   //it means target in left part.
                   high=mid-1;
                }
                else{
                    //it mean target in right part.
                    low=mid+1;
                }   
            }
            //right part is sorted.
            else{
                if(target>=nums[mid] && target<=nums[high]){
                    //it means target in right part.
                    low=mid+1;
                }
                else{
                    //it mean target in left part.
                    high=mid-1;
                }   
            }
        }
        return -1;
    }
};