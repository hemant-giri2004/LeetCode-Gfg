class Solution {
public:
    int smallestNumber(int n) {
        int lastpos=0;
        for(int i=1;i<32;i++){
            if((n>>i)&1)
                lastpos=i;
        }
        return pow(2,lastpos+1)-1;
    }
};