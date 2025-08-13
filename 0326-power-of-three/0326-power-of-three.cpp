class Solution {
public:
    bool isPowerOfThree(int n) {
        // //logn time complexicity where log base is 3.
        // if(n<=0)    
        //     return false;
        // while(n%3==0)   
        //     n/=3;
        // if(n==1)
        //     return true;
        // return false;
        int maxPow=pow(3,19);
        return (n>0 && maxPow%n==0);
    }
};