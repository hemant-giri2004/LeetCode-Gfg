class Solution {
public:
    string decodeMessage(string key, string message) {
        //CRETE MAPPING. 
        char st='a';
        char mapping[260]={0};
        for(auto ch : key){
            if(ch!=' ' && mapping[ch]==0)
                mapping[ch]=st++;
        }
        //USE MAPPING.
        string ans;
        for(auto ch: message){
            if(ch==' ')
                ans.push_back(' ');
            else{
                char decodeC=mapping[ch];
                ans.push_back(decodeC);
            }
        }
        return ans;
    }
};