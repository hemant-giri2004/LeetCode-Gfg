class Solution {
public:
    int smallestNumber(int n) {
        int lastpos=0;
        for(int i=1;i<32;i++){
            if((n>>i)&1)
                lastpos=i;
        }
        int result=0;
        for(int i=0;i<=lastpos;i++){
            result=(result<<1)|1;
        }
        return result;
    }
};