class Solution {
public:
    int gcd(int a, int b) {
        if(a==0)    return b;
        if(b==0)    return a;
        
        while(a>0&& b>0){
            if(a>b)
                a=a-b;
            else
                b=b-a;
        }
        return a>b?a:b;
        
    }
    int findGCD(vector<int>& nums) {
        int min=INT_MAX,max=INT_MIN;
        for(auto n:nums){
            if(n<min)
                min=n;
            if(n>max)
                max=n;
        }
        return gcd(min,max);
    }
};