class Solution {
public:
    
    string reorganizeString(string s) {
        int freq[26]={0};
        for(auto ch:s){
            freq[ch-'a']++;
        }
        //find mot occrence character
        int max=0;
        char c;
        for(int i=0;i<26;i++){
            if(max<freq[i]){
                max=freq[i];
                c=i+'a';
            }
        }
        int j=0;
        while(j< s.size() && max>0){
            s[j]=c;
            max--;
            j+=2;
        }
        if(max!=0)  return "";
        
        freq[c-'a']=0;
        for(int i=0;i<26;i++){
            while(freq[i]>0){
                if(j>=s.size()) j=1;
                s[j]=i+'a';
                freq[i]--;
                j+=2;
            }

        }
        return s;
    }
};