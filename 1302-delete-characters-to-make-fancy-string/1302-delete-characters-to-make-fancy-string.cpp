class Solution {
public:
    string makeFancyString(string s) {
        int n=s.length();
        string str="";
        str.push_back(s[0]);
        int freq=1;
        for(int i=1;i<n;i++){
            if(str.back()==s[i]){
                freq++;
                if(freq<3)
                    str.push_back(s[i]);
            }
            else{
                str.push_back(s[i]);
                freq=1;
            }

        }
        return str;
    }
};