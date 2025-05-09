class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        // int m=s.length(),n=t.length();
        while(s[i]!=NULL && t[j]!=NULL){
            if(s[i]==t[j])
                i++;
            j++;
        }
        return s[i]==NULL;
    }
};