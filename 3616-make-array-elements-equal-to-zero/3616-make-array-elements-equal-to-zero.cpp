class Solution {
public:
    int N;
    int check(vector<int> nums,int curr,int dir){
        while(curr>=0 && curr<N){
            if(nums[curr]>0){
                nums[curr]--;
                (dir==1)?dir=-1:dir=1;
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
        int cnt=0;
        N=nums.size();
        for(int i=0;i<N;i++){
            if(nums[i]==0){
                cnt+=check(nums,i,1);    //for right dir
                cnt+=check(nums,i,-1);   //for left dir
            }
        }
        return cnt;
    }
};