class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result=0;
        //pick last value add into front 32 times.
        for(int i=0;i<32;i++){  
            uint32_t lastBit=n&1;
            result=(result<<1)|lastBit;
            n>>=1;
        }
        return result;
    }
};