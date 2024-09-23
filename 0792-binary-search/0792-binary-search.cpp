class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0,en=nums.size()-1;
        while(st<=en){
            int m=st+(en-st)/2;
            if(nums[m]==target)
                return m;
            else if(nums[m]<target)
                st=m+1;
            else
                en=m-1;
        }
        return -1;
    }
};