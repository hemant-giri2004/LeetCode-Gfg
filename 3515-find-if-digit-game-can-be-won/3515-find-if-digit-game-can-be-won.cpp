class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleDigitSum=0,doubleDigitSum=0,remainingSum=0;
        for(int n:nums){
            if(n>=0 && n<=9)
                singleDigitSum+=n;
            else if(n>=10 && n<=99)
                doubleDigitSum+=n;
            else
                remainingSum+=n;
        }
        if(singleDigitSum>doubleDigitSum+remainingSum)
            return true;
        else if(doubleDigitSum>singleDigitSum+remainingSum)
            return true;
        return false;
    }
};