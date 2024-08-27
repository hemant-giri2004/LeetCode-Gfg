class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i=0;
        while(1){
            char c=0;
            for(auto str:strs){
                if(i>=str.size()){   //Out of bound
                    c=0;
                    break;
                }
                if(c==0)        
                    c=str[i];
                else if(c !=str[i]){
                    c=0;
                    break;
                }
            }
            if(c==0)
                break;
            ans.push_back(c);
            i++;
        }
        return ans;
    }
};