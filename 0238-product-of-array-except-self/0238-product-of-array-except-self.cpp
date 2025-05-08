class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);

        // //n^2 time
        // for(int i=0;i<n;i++){
        //     int product=1;
        //     for(int j=0;j<n;j++){
        //         if(i==j)
        //             continue;
        //         product*=nums[j];
        //     }
        //     ans[i]=product;
        // }

        // //n time with extra space;
        // vector<int > pre(n),suf(n);
        // pre[0]=1,suf[n-1]=1;
        // for(int i=1;i<n;i++)
        //     pre[i]=(pre[i-1]*nums[i-1]);
        // for(int i=n-2;i>=0;i--)
        //     suf[i]=suf[i+1]*nums[i+1];
        // for(int i=0;i<n;i++)
        //     ans[i]=pre[i]*suf[i];

        //n time 
        ans[0]=1;
        for(int i=1;i<n;i++)
            ans[i]=ans[i-1]*nums[i-1];
        int suf=1;
        for(int i=n-2;i>=0;i--){
            suf*=nums[i+1];
            ans[i]*=suf;
        }
        return ans;
    }
};