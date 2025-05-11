class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string> > mp;
        for(auto str:strs){
            string temp=str;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(str);
        } 
        for(auto str:mp){
            vector<string> temp=str.second;
            ans.push_back(temp);
        }
        return ans;
    }
};