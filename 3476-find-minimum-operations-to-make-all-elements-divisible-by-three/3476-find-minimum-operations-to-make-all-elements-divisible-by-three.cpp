class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        for(auto num:nums){
            if(num%3!=0)
                cnt++;
        }
        return cnt;
    }
};