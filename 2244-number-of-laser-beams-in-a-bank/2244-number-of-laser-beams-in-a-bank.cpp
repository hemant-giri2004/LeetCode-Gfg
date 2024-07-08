class Solution {
public:
    int count1(string str){
        int cnt1=0;
        for(auto ch:str)
            if(ch=='1')
                cnt1++;
        return cnt1;
    }
    int numberOfBeams(vector<string>& bank) {
        vector<int >count;
        int lb=0;
        for(auto str:bank)
            count.push_back(count1(str));
        int i=0;
        while(i<count.size() && count[i]==0)
            i++;
        int j=i+1;
        while(j<count.size()){
            if(count[j]>0){
                lb+=(count[i]*count[j]);
                i=j;
                j++;
            }
            else
                j++;
        }
        return lb;
    }
};