class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int result=0;   //length of maximum length subarray that has max bitwise And.
        int maxVal=0;
        int streak=0;
        for(auto num:nums){
            if(num>maxVal){
                maxVal=num;
                result=0;
                streak=0;
            }
            if(num==maxVal){
                streak++;
            }else{
                streak=0;
            }
            result = max(result,streak);
        }
        return result; 
    }
};