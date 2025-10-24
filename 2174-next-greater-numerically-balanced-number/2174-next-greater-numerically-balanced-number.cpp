class Solution {
public:
    bool isBalance(int n){
        int freq[10]={0};
        while(n>0){
            freq[n%10]++;
            n/=10;    
        }
        for(int digit=0;digit<10;digit++){
            if(freq[digit]>0 && digit!=freq[digit])
                return false;
        }
        return true;
    }

    int nextBeautifulNumber(int n) {
        
        for(int i=n+1;i<=1224444;i++){
            if(isBalance(i))
                return i;
        }
        return -1;
    }
};