class Solution {
public:
    int mirrorDistance(int n) {
        int act=n;
        int rev=0;
        while(n){
            rev*=10;
            rev+=n%10;
            n=n/10;
        }
        return abs(act-rev);
    }
};