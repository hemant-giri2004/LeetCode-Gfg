class Solution {
public:
    int N;
    int check(vector<int> nums,int curr,int dir){
        while(curr>=0 && curr<N){
            if(nums[curr]>0){
                nums[curr]--;
                dir*=-1;
            }
            curr+=dir;
        }
        for(int i=0;i<N;i++){
            if(nums[i]!=0)
                return 0;
        }
        return 1;
    }
    int countValidSelections(vector<int>& nums) {
        N=nums.size();
        // //n*n
        // int cnt=0;
        // for(int i=0;i<N;i++){
        //     if(nums[i]==0){
        //         cnt+=check(nums,i,1);    //for right dir
        //         cnt+=check(nums,i,-1);   //for left dir
        //     }
        // }
        // return cnt;

        //n
        int totalSum=0;
        int leftSum=0;
        for(int i=0;i<N;i++){
            totalSum+=nums[i];
        }
        int result=0;
        for(int i=0;i<N;i++){
            leftSum+=nums[i];
            if(nums[i]==0){
                int rightSum=(totalSum-leftSum);
                if(leftSum==rightSum)
                    result+=2;
                else if(abs(leftSum-rightSum)==1)
                    result+=1;
            }
        }
        return result;
    }
};