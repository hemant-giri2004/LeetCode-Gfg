class Solution {
public:
    bool checkString(string s) {
        int i=0;
        while(s[i]=='a'){
            i++;
        }
        while(s[i]!='a' && s[i]!=0)
            i++;
        if(s[i]==0)
            return true;
        return false;    
    }
};