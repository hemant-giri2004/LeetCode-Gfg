class Solution {
public:
    int M=1e9+7;
    int t[201][2001][2];
    int solve(int oneLeft,int zeroLeft,bool lastWasOne,int& limit){
        if(oneLeft==0 && zeroLeft==0){
            return 1;
        }

        if(t[oneLeft][zeroLeft][lastWasOne]!=-1){
            return t[oneLeft][zeroLeft][lastWasOne];
        }

        int result=0;
        //explore 0
        if(lastWasOne){
            for(int len=1;len<=min(limit,zeroLeft);len++){
                 result = (result + solve(oneLeft, zeroLeft - len, false, limit)) % M;
            }
        }//explore 1
        else{
            for(int len=1;len<=min(limit,oneLeft);len++){
                result = (result + solve(oneLeft - len, zeroLeft, true, limit)) % M;
            }
        }

        return t[oneLeft][zeroLeft][lastWasOne]=result;
    }
    int numberOfStableArrays(int zero, int one, int limit) {
        memset(t,-1,sizeof(t));
        int startWithZero=solve(one,zero,true,limit);
        int startWithOne=solve(one,zero,false,limit);

        return (startWithZero+startWithOne)%M;
    }
};