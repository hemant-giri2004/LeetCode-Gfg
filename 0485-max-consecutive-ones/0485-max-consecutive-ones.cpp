class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=-1,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                cnt=0;
            else
                cnt++;
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};