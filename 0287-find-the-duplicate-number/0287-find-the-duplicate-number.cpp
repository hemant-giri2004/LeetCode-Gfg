class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int >mark(n,-1);
        for(int i=0;i<n;i++)
            mark[nums[i]]++;
        for(int i=0;i<n;i++)
            if(mark[i]>0)
                return i;
        
        return -1;
    }

};