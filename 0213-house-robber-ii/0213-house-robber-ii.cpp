class Solution {
public:
    int robAmt(vector<int>& nums,int i,int e,vector<int >&memo){
        if(i>e)
            return 0;
        if(memo[i]!=-1)
            return memo[i];
        int robAmt1=nums[i]+robAmt(nums,i+2,e,memo);
        int robAmt2=0+robAmt(nums,i+1,e,memo);
        memo[i]=(robAmt1>robAmt2)?robAmt1:robAmt2;
        return memo[i];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) 
            return nums[0]; 
        vector<int> memo1(n, -1);
        vector<int> memo2(n, -1);
        int option1=robAmt(nums,0,n-2,memo1);
        int option2=robAmt(nums,1,n-1,memo2);
        
        return option1>option2 ?option1:option2;
    }
};