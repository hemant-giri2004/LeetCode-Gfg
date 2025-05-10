class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // for(auto n:nums)   
        //     mp[n]++;
        // vector<int>ans;
        // for(auto it:mp)
        //     if(it.second==1)
        //         ans.push_back(it.first);
        // return ans;
        long long xor_=0;
        for(auto n:nums)
            xor_^=n;
        int mask=xor_&(-xor_);
        int grpA=0,grpB=0;
        for(auto n : nums){
            if(n&mask)
                grpA^=n;
            else
                grpB^=n;
        }
    return {grpA,grpB};
    }
};