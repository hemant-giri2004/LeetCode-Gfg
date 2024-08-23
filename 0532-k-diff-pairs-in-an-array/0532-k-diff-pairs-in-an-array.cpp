class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=1;
        set<pair<int,int>>ans;
        int n=nums.size();
        while(j<n){
            int dif=nums[j]-nums[i];
            if(dif==k){
                ans.insert({nums[i],nums[j]});
                i++,j++;
            }
            else if(dif>k)
                i++;
            else
                j++;
            if(i==j) 
                j++;
        }
        return ans.size();
    }
};