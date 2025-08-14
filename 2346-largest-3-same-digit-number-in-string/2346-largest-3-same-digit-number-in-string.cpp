class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        char result=' ';
        for(int i=0;i<n-2;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                result=max(num[i],result);
            }
        }
        if(result==' ')   return "";
        return string(3,result);
    }
};