class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        // int n=nums.size()/2;
        // unordered_set<int> st(n+1);
        // for(int n:nums){
        //     if(st.count(n))
        //         return n;
        //     st.insert(n);
        // }
        // return -1;
        int n = nums.size();
        
        for(int i = 2; i<n; i++) {
            if(nums[i] == nums[i-1] || nums[i] == nums[i-2])
                return nums[i];
        }
        
        return nums[n-1]; //or, nums[0]
    }
};