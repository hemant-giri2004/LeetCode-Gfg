class Solution {
public:
    int expend(string s,int i,int j){
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--,j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalcount=0;
        for(int center =0; center < s.length(); center ++){
            //count odd length strings where expend start from center 
            int oddAns=expend(s,center,center);
            //count even length string
            int evenAns=expend(s,center,center +1);
            totalcount+=oddAns+evenAns;
        }
        return totalcount;
    }
};