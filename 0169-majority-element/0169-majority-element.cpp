class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // //n^2 time
        // for(auto n: nums){
        //     int cnt=0;
        //     for(auto m:nums){
        //         if(n==m)
        //             cnt++;
        //     }
        //     if(cnt>(nums.size()/2))
        //         return n;
        // }

        // nlogn time 
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
        

        // unordered_map <int,int> countMap;
        // int majorityCount=nums.size()/2;
        // for(auto num:nums){
        //     countMap[num]++;
        //     if(countMap[num]>majorityCount)
        //         return num;
        // }
        return -1;
    }
};