class Solution {
public:
    bool isInc(vector<int>& nums,int st,int en){
        for(int i=st+1;i<en;i++){
            if(nums[i]<=nums[i-1])
                return false;
        }
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        for(int st=0;st+2*k<=n;st++){
            if(isInc(nums,st,st+k) && isInc(nums,st+k,st+2*k))
                return true;
        }
        return false;
    }
};