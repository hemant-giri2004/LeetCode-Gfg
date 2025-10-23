class Solution {
public:
    bool hasSameDigits(string s) {
        int n=s.length();
        if(n<3)
            return false;
        while(n>2){
            for(int i=0;i<s.size()-1;i++){
                s[i]=(( (s[i]-'0') + (s[i+1]-'0') ) % 10)+'0';
            }
            n--;
        }
        return (s[0]==s[1]);
    }
};