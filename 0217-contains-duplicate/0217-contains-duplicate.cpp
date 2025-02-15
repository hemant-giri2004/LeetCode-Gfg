class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++)
        //     if(nums[i]==nums[i+1])
        //         return true;
        // return false;
                
        //by using the extra space
        unordered_set<int> set;
        for(auto n:nums)
            set.insert(n);
        if(set.size()<nums.size())
            return true;
        return false;
    }
};