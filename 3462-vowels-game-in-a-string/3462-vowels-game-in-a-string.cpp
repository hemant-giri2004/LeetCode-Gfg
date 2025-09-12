class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            return true;
        return false;
    }
    bool doesAliceWin(string s) {
        for(char &ch:s){
            if(isVowel(ch)){
                return true;
            }
        }
        return false;
    }
};