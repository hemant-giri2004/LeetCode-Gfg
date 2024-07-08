class Solution {
public:

    int countPrimes(int n) {
        if(n==0) return 0;
        int cnt=0;
        vector<bool> isPrime(n,true);
        isPrime[0]=isPrime[1]=false;
        for(int i=2;i<n;i++){
            if(isPrime[i]){
                cnt++;
                int j=2*i;
                while(j<n){
                    isPrime[j]=false;
                    j+=i;
                }
            }
        }
        return cnt;
    }
};