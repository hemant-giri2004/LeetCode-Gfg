class Solution {
public:
    string findKey(string str){
        string ans;
        int arr[26]={0};
        for(auto ch:str){
            arr[ch-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]>0)
                ans+=string(arr[i],i+'a');
        }
        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // vector<vector<string>> ans;
        // unordered_map<string,vector<string> > mp;
        // for(auto str:strs){
        //     string temp=str;
        //     sort(temp.begin(),temp.end());
        //     mp[temp].push_back(str);
        // } 
        // for(auto str:mp){
        //     ans.push_back(str.second);
        // }
        // return ans;

        vector<vector<string>> ans;
        unordered_map<string,vector<string> > mp;
        for(auto str:strs){
            string key=findKey(str);
            mp[key].push_back(str);
        } 
        for(auto str:mp){
            ans.push_back(str.second);
        }
        return ans;

        
    }
};