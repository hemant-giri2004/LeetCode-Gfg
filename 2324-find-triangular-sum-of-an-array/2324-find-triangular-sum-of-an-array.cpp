class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1)    return nums[0];

        // vector<int> result(n-1);
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                nums[j]=(nums[j]+nums[j+1])%10;
            }
        }
        return nums[0];
    }
};