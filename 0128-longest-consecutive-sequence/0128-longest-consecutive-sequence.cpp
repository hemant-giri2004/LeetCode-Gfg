class Solution {
public:
    bool ls(vector<int>& nums,int num){
        for(auto n:nums)
            if(num==n)
                return true;
        return false;
    }
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int num=nums[i];
        //     int cnt=1;
        //     while(ls(nums,num+1)==true){
        //         cnt++;
        //         num+=1;
        //     }
        //     if(cnt>longest)
        //         longest=cnt;
        // }

        sort(nums.begin(),nums.end());
        int lastSmallest=INT_MIN;
        int cnt=0;
        for(auto n:nums){
            if(lastSmallest==n-1)
                cnt++,lastSmallest=n;
            else if(lastSmallest==n)
                continue;
            else
                cnt=1,lastSmallest=n;

            if(cnt>longest)
                longest=cnt;
        }
        return longest;
    }
};