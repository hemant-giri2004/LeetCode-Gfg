class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int c=1;
        for(int i=n-1;i>=0 && c;i--){
            int ans=c+digits[i];
            if(ans>9){
                ans=0;
                c=1;
            }
            else
                c=0;
            digits[i]=ans;
        }
        if(c)
            digits.insert(digits.begin(),c);
        return digits;
    }
};