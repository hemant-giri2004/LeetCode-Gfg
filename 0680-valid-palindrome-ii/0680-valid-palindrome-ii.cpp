class Solution {
    bool isPalindrome(string s,int st,int en){
        while(st<=en){
            if(s[st]!=s[en])
                return false;
            else
                st++,en--;
        }
        return true;
    }
    public : bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(s[i]==s[j])
                i++,j--;
            else{
                bool ans1=isPalindrome(s,i+1,j);
                bool ans2=isPalindrome(s,i,j-1);
                return ans1||ans2;
            }
        }
        return true;
    }
};