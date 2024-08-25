class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=s.length();
        int i=0,j=l-1;
        while(i<=j){
            if(((s[i]>='a'&& s[i]<='z' )||( s[i]>='A'&&s[i]<='Z'))&&((s[j]>='a'&& s[j]<='z' )||( s[j]>='A'&&s[j]<='Z'))){
                swap(s[i],s[j]);
                i++,j--;
            }
            else if((s[i]>='a'&& s[i]<='z' )||( s[i]>='A'&&s[i]<='Z'))
                j--;
            else
                i++;
        }
        return s;
    }
};