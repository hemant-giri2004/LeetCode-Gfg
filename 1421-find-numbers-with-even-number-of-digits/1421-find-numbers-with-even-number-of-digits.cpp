class Solution {
public:
    int cntDigits(int n){
        int cnt=0;
        while(n!=0){
            n/=10;
            cnt++;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int n : nums)
            if(cntDigits(n)%2==0)
                cnt++;
        return cnt;
    }
};