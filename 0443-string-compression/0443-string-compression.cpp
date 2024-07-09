class Solution {
public:
    int compress(vector<char>& chars) {
        int ind=0;
        int prev=0,cnt=1,i;
        for(i=prev+1;i<chars.size();i++){
            if(chars[i]==chars[prev])
                cnt++;
            else{
                chars[ind++]=chars[prev];
                if(cnt>1){
                    int start=ind;
                    while(cnt){
                        chars[ind++]=(char)((cnt%10)+48);
                        cnt/=10;
                    }
                    reverse(chars.begin()+start,chars.begin()+ind);
                }
                prev=i;
                cnt=1;
            }
            
        }
        chars[ind++]=chars[prev];
        if(cnt>1){
            int start=ind;
            while(cnt){
                chars[ind++]=(char)((cnt%10)+48);
                cnt/=10;
            }
            reverse(chars.begin()+start,chars.begin()+ind);
        }
        return ind;
    }
};