class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        for(auto num:nums){
            if(num%3==1)
                cnt++;
            else if(num%3==2)
                cnt++;
        }
        return cnt;
    }
};