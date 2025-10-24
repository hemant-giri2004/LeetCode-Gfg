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
    vector<int>digitCount{0,1,2,3,4,5,6,7,8,9};
    int backtrack(int n,int curr,int count){
        //base case
        if(count==0){
            for(int digit=1;digit<=9;digit++){
                if(digitCount[digit]!=0 && digitCount[digit]!=digit){
                    return 0;
                }
            }
            return curr>n?curr:0;
        }

        int result=0;
        for(int digit=1;digit<=9;digit++){
            if(digitCount[digit]>0 && digitCount[digit]<=count){
                digitCount[digit]--;
                result=backtrack(n,curr*10+digit,count-1);
                digitCount[digit]++;
            }
            if(result!=0){
                break;
            }
        }

        return result;
    }

    int nextBeautifulNumber(int n) {
        
        // for(int i=n+1;i<=1224444;i++){
        //     if(isBalance(i))
        //         return i;
        // }
        // return -1;

        int numDigit=to_string(n).length();

        int result=backtrack(n,0,numDigit);
        if(result==0){
            result=backtrack(n,0,numDigit+1);
        }

        return result;
    }
};