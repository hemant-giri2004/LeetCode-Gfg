class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int i=0;    //point to non equal neigbour at left side.
        int j=1;    //use to point non equal neigbour at right hand side by j+1.
        while(j+1<n){
            if((nums[i]<nums[j] && nums[j]>nums[j+1])||(nums[i]>nums[j] && nums[j]<nums[j+1])){
                cnt++;
                i=j;
            }
            j++;
        }
        return cnt;
    }
};