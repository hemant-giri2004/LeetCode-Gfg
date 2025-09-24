class Solution {
public:
    string fractionToDecimal(int nu, int de) {
        if(nu==0)   
            return "0";

        string result;

        if((long long)nu*(long long)de<0) 
            result+="-";

        long long absNu= labs(nu);
        long long absDe= labs(de);

        long long integerDiv = absNu/absDe;
        result+=to_string(integerDiv);

        long long remain= absNu % absDe;
        if(remain == 0)
            return result;

        result +='.';

        unordered_map<int ,int> mp;

        while(remain!=0){
            if(mp.count(remain)){
                result.insert(mp[remain],"(");
                result+=")";
                break;
            }

            mp[remain]=result.length();
            remain*=10;
            int digit=remain/absDe;
            result+=to_string(digit);
            remain =remain % absDe;
        }
        return result;
    }
};