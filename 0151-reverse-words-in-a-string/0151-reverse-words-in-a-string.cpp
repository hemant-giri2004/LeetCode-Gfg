class Solution {
public:
    string reverseWords(string s) {
        
        // int  n=s.length();
        // string str="";
        // //reverse sentence
        // reverse(s.begin(),s.end());
        // for(int i=0;i<n;i++){
        //     string word="";
        //     while(i<n && s[i]!=' ')
        //         word+=s[i++];
        //     //reverse word
        //     reverse(word.begin(),word.end());
        //     if(word.length()>0)
        //         str+=" "+word;
        // }
        // return str.substr(1);

        int n=s.size();
        //reverse whole string
        reverse(s.begin(),s.end());
        int i=0,l=0,r=0;
        //travere whole string and reverse character between l or r.
        while(i<n){
            while(i<n  && s[i]!=' ')
                s[r++]=s[i++];
            if(l<r){
                reverse(s.begin()+l,s.begin()+r);
                s[r]=' ';
                r++;
                l=r;
            }
            i++;
        }
        return s.substr(0,r-1);
    }
};