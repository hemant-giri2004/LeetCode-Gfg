class Solution {
public:
    string binary(int n){
        string ans="";
        while(n>0){
            int rem = n % 2;
            ans = (char)(rem + '0') + ans; // Correct conversion and concatenation
            n = n / 2;
        }
        return ans;
    }
    string convertDateToBinary(string date) {
        string year,month,day,ans="";
        year=date.substr(0,4);
        month=date.substr(5,2);
        day=date.substr(8,2);
        ans+=binary(stoi(year));
        ans+="-";
        ans+=binary(stoi(month));
        ans+="-";
        ans+=binary(stoi(day));
        return ans;
    }
};
