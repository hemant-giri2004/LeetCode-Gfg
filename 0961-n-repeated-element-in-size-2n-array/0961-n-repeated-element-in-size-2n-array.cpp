class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_set<int> st(n+1);
        for(int n:nums){
            if(st.count(n))
                return n;
            st.insert(n);
        }
        return -1;
    }
};