class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> isBroken(26,false);
        for(char &ch:brokenLetters){
            isBroken[(int)ch-97]=true;
        }

        bool isBroke=false;
        int result=0;
        for(char &ch:text){
            if(ch==' '){
                if(isBroke)
                    isBroke=false;
                else
                    result++;
            }
            else if(isBroken[(int)ch-97]){
                isBroke=true;
            }
        }
        if(isBroke)
            isBroke=false;
        else
            result++;
        return result;
    }
};