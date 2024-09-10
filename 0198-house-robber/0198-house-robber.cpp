class Solution {
public:
    int robAmt(vector<int>& nums,int i,vector<int >&memo){
        if(i>=nums.size())
            return 0;
        if(memo[i]!=-1)
            return memo[i];
        int robAmt1=nums[i]+robAmt(nums,i+2,memo);
        int robAmt2=0+robAmt(nums,i+1,memo);
        memo[i]=(robAmt1>robAmt2)?robAmt1:robAmt2;
        return memo[i];
    }
    int rob(vector<int>& nums) {
        vector<int> memo(nums.size(), -1);  
        return robAmt(nums,0,memo);
    }
};