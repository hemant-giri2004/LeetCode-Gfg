class Solution {
public:
    typedef long long ll;
    int n;
    unordered_map<ll,ll > mp;
    vector<ll> t;

    ll solve(int i,vector<ll>& nums){
        if(i>=n)
            return 0;

        if(t[i]!=-1)
            return t[i];
        //skip
        ll skip=solve(i+1,nums);
        //take
        int j=lower_bound(begin(nums)+i+1,end(nums),nums[i]+3)-begin(nums);
        ll take=nums[i]*mp[nums[i]]+solve(j,nums);
        return t[i]=max(skip,take);
    }
    long long maximumTotalDamage(vector<int>& power) {

        for(int x: power){
            mp[x]++;
        }

        vector<ll> nums(mp.size());
        for(auto &it:mp){
            nums.push_back(it.first);
        }

        sort(begin(nums),end(nums));
        n=nums.size();
        t.assign(n,-1);
        return solve(0,nums);
    }
};