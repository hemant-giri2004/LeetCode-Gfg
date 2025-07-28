class Solution {
public:
    int countSubset(int idx, int curOr, vector<int>& nums, int maxOR){
        //base case
        if(idx == nums.size()){
            if(curOr == maxOR)
                return 1;
            return 0;
        } 

        //if i take current element in subset.
        int take=countSubset(idx+1, curOr|nums[idx], nums, maxOR);
        //if i not take the current element in subset.
        int notTake=countSubset(idx+1, curOr, nums, maxOR);

        return take + notTake;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        //step 1 : find max OR.
        int maxOR = 0;
        for(auto &num : nums ){
            maxOR |= num;
        }

        //step 2 : find the OR of each subset and check is greater or equal to max OR.
        int curOr = 0;
        return countSubset(0, curOr, nums, maxOR);
    }
};