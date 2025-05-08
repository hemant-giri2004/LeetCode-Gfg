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

        // // nlogn time 
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()/2];
        
        // // n time
        // unordered_map <int,int> countMap;
        // int majorityCount=nums.size()/2;
        // for(auto num:nums){
        //     countMap[num]++;
        //     if(countMap[num]>majorityCount)
        //         return num;
        // }

        int cnt=1;
        int ele=nums[0];
        for(int i=1;i<nums.size();i++){
            if(cnt==0){
                cnt++;
                ele=nums[i];
            }
            else if(nums[i]==ele){
                cnt++;
            } 
            else
                cnt--;
        }
        return ele;
        return -1;
    }
};