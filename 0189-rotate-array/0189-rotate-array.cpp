class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //this give tle.
        // while(k--){
        //     int last=nums[nums.size()-1];
        //     for(int i=nums.size()-1;i>0;i--){
        //         nums[i]=nums[i-1];
        //     }
        //     nums[0]=last;
        // }
        int n=nums.size();
        k%=n;
        int i=0,j=n-k-1;
        while(i<j && j<n){
            swap(nums[i],nums[j]);
            i++,j--;
        }
        i=n-k,j=n-1;
                while(i<j){
            swap(nums[i],nums[j]);
            i++,j--;
        }
        i=0,j=n-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++,j--;
        }

    }
};