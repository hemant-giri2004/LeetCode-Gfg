class Solution {
public:
    bool find(vector<int>& nums, int original){
        for(auto n:nums){
            if(original==n){
                return true;
            }
        }
        return false;
    }
    int findFinalValue(vector<int>& nums, int original) {
        while(find(nums,original)){
            original*=2;
        }
        return original;
    }
};