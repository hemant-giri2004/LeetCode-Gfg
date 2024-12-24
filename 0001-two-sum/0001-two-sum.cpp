class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=nums[i];
            int more=target-num;
            //because map return the index if element is find else return the index.
            if(mp.find(more)!=mp.end()){
                return {mp[more],i};
            }
            mp[num]=i;
        }
        return {-1,-1};
    }
};