class Solution {
public:
    static bool mycom(string a,string b){
        string t1=a+b;
        string t2=b+a;
        return t1>t2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> snum;
        for(auto n : nums)
            snum.push_back(to_string(n));
        sort(snum.begin(),snum.end(),mycom);
        if(snum[0]=="0")    return "0";
        string ans;
        for(auto s :snum)
            ans+=s;
        return ans;
    }
};