class Solution {
public:
    int pivotIndex(vector<int>& nums){
        int st=0,n=nums.size();
        int end=n-1;
        int m=st+(end-st)/2;

        while(st<=end){
            if(st==end)
                return st;
            if(m-1>=0 && nums[m]<nums[m-1]) 
                return m-1;
            else if(m+1<n && nums[m]>nums[m+1]) 
                return m;
            else if(nums[st]>nums[m])
                end=m-1;
            else
                st=m+1;
            m=(st+end)/2;
        }
        return -1;
    }
    int bs(vector<int> &arr,int s,int e,int t){
        while(s<=e){
            int m=(s+e)/2;
            if(arr[m]==t)
                return m;
            else if(arr[m]<t)
                s=m+1;
            else if(arr[m]>t)
                e=m-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int p=pivotIndex(nums);
        int st=0,end=nums.size()-1,ans=-1;
        if(target>=nums[st] && target<=nums[p])
            ans=bs(nums,0,p,target);
        else
            ans=bs(nums,p+1,end,target);
        return ans;
    }
};