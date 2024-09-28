class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        if(nums.size()==0)  return 0;
        int cnt[51]={0};
        for(int n:nums)
            cnt[n]++;
        int set=true,ans=0;
        for(int i=0;i<51;i++)
            if(cnt[i]==2){
                ans^=i;
                set=false;
            }
        if(set) return 0;
        return ans;
    }
};