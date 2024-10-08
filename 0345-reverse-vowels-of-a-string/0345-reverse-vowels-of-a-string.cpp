class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
            int l=s.length();
        int i=0,j=l-1;
        while(i<=j){
            if(isVowel(s[i])&& isVowel(s[j])){
                swap(s[i],s[j]);
                i++,j--;
            }
            else if(isVowel(s[i]))
                j--;
            else
                i++;
        }
        return s;
    }
};