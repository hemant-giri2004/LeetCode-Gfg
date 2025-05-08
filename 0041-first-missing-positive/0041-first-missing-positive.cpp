class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        // //n^2 time.
        // for(int i=1;i<=n;i++){
        //     bool find=false;
        //     for(int j=0;j<n;j++){
        //         if(i==nums[j]){
        //             find=true;
        //             break;
        //         }
        //     }
        //     if(!find)
        //         return i;
        // }

        // //n time
        // unordered_set<int> s;
        // for(auto n:nums)
        //     s.insert(n);
        // for(int i=1;i<=n;i++){
        //     if(s.find(i)==s.end())
        //         return i;
        // }

        //n time 
        //data filtering
        for(int i=0;i<n;i++){
            if(nums[i]<=0 || nums[i]>=n+1)
                nums[i]=n+1;
        }
        //mark visited 
        for(int i=0;i<n;i++){
            int ele=abs(nums[i]); 
            if(ele==n+1)
                continue;
            int seat=ele-1;
            if(nums[seat]>0)
                nums[seat]*=(-1);
        }
        //find vacant seat
        for(int i=0;i<n;i++){
            if(nums[i]>0)
                return i+1;
        }
        return n+1;
        return -1;
    }
};