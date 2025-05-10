class Solution {
public:
    string reverseWords(string s) {
        int  n=s.length();
        string str="";
        //reverse sentence
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            string word="";
            while(i<n && s[i]!=' ')
                word+=s[i++];
            //reverse word
            reverse(word.begin(),word.end());
            if(word.length()>0)
                str+=" "+word;
        }
        return str.substr(1);
    }
};