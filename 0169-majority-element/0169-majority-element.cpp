class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> countMap;
        int majorityCount=nums.size()/2;
        for(auto num:nums){
            countMap[num]++;
            if(countMap[num]>majorityCount)
                return num;
        }
        return -1;
    }
};