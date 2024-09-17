class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1,j=b.length()-1;
        char carry=0;
        string ans;
        while(i>=0 && j>=0){
            if(a[i]=='1' && b[j]=='1' && carry==1){
                ans.insert(ans.begin(),'1');
                carry=1;
            }
            else if(a[i]=='1' && b[j]=='1' && carry==0){
                ans.insert(ans.begin(),'0');
                carry=1;
            }
            else if(a[i]=='0' && b[j]=='0' && carry==0){
                ans.insert(ans.begin(),'0');
                carry=0;
            }
            else if(((a[i]=='1' && b[j]=='0')||(a[i]=='0' && b[j]=='1')) && carry==1){
                ans.insert(ans.begin(),'0');
                carry=1;
            }
            else{
                ans.insert(ans.begin(),'1');
                carry=0;
            }
            i--,j--;
        }
        while(i>=0){
            if(a[i]=='1' && carry==1){
                ans.insert(ans.begin(),'0');
                carry=1;
            }
            else if(a[i]=='0' && carry==0){
                ans.insert(ans.begin(),'0');
                carry=0;
            }
            else{
                ans.insert(ans.begin(),'1');
                carry=0;
            }
            i--;
        }
        while(j>=0){
            if(b[j]=='1' && carry==1){
                ans.insert(ans.begin(),'0');
                carry=1;
            }
            else if(b[j]=='0' && carry==0){
                ans.insert(ans.begin(),'0');
                carry=0;
            }
            else{
                ans.insert(ans.begin(),'1');
                carry=0;
            }
            j--;
        }
        if(carry)
            ans.insert(ans.begin(),'1');
        return ans;
    }
};