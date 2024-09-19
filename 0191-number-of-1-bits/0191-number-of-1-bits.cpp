class Solution {
public:
    int hammingWeight(int n) {
        int cnt=0;
        while(n!=0){
            int bit=n&1;
            if(bit)
                cnt++;
            n>>=1;
        }
        return cnt;
    }
};