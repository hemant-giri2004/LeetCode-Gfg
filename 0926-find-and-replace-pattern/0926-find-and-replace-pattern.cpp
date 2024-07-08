class Solution {
public:
    void createMapping(string& s){
        int map[256]={0};
        char st='a';
        //create mapping
        for(auto ch:s){
            if(map[ch]==0)
                map[ch]=st++;
        }
        //replace the string with mapping
        for(int i=0;i<s.length();i++){
            int ch=s[i];
            s[i]=map[ch];
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        createMapping(pattern);
        vector<string > ans;
        for(auto str:words){
            string tempS=str;
            createMapping(tempS);
            if(tempS==pattern)
                ans.push_back(str);
        }
        return ans;
    }
};