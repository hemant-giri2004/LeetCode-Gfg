class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        long long totalSubArr=0;
        // int i=0;
        // while(i<n){
        //     long long len=0;
        //     if(nums[i]==0){
        //         while(i<n && nums[i]==0){
        //             len++;
        //             i++;
        //         }
        //     }
        //     else{
        //         i++;
        //     }
        //     totalSubArr+=(len*(len+1)/2);
        // }

        //approach 2
        int count=0;
        for(int i=0;i<n; i++){
            if(nums[i]==0){
                count++;
            }else{
                count=0;
            }
            totalSubArr+=count;
        }
        return totalSubArr;
    }
};