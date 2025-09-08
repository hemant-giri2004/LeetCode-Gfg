class Solution {
public:
    bool notContainZero(int n){
        while(n>0){
            int rem=n%10;
            if(rem==0) 
                return false;
            n/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        // //n = a + b where b=n-a
        // for(int a=1;a<n;a++){
        //     int b=n-a;
        //     if(notContainZero(a) && notContainZero(b)){
        //         return {a,b};
        //     }
        // }
        // return {-1};
        int a=n,b=0,placeVal=1;
        while(n>1){
            int take=1;
            if(n%10==1)
                take=2;
            a-=take*placeVal;
            b+=take*placeVal;
            placeVal*=10;
            n=(n-take)/10;
        }
        return {a,b};
    }
};