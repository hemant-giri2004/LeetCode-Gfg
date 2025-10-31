class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        vector<int> result;
        for(auto it:mp){
            if(it.second>1){
                result.push_back(it.first);
            }
        }
        return result;
    }
};