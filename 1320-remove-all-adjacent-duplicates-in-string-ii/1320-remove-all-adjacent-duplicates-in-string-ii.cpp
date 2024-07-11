class Solution {
public:
    bool lastKCharIsEqual(string &ans,char ch,int k){
        int it=ans.size()-1;
        for(int i=0;i<k;i++){
            if(ans[it]!=ch) return false;
            it--;
        }
        return true;
    }
    string twoPointerApproch(string &s,int &k){
        vector<int >count(s.size());
        int i=0,j=0;
        while(j<s.size()){
            s[i]=s[j];
            count[i]=1;
            if(i>0 && s[i]==s[i-1])
                count[i]+=count[i-1];
            if(count[i]==k)
                i-=k;
            i++,j++;
        }
        return s.substr(0,i);
    }
    string removeDuplicates(string s, int k) {
        // string ans="";
        // for(auto ch:s){
        //     if(ans.size()<k-1)
        //         ans.push_back(ch);
        //     else{
        //         if(lastKCharIsEqual(ans,ch,k-1))
        //             for(int i=0;i<k-1;i++)
        //                 ans.pop_back();
        //         else
        //             ans.push_back(ch);
        //     }
        // }
        // return ans;
        return twoPointerApproch(s,k);
    }
};