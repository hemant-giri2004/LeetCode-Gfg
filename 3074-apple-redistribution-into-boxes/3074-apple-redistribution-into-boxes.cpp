class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        long long sum=0;
        for(auto a:apple){
            sum+=a;
        }
        sort(capacity.begin(),capacity.end());
        int i=capacity.size()-1;
        int ans=0;
        while(i>=0 && sum>0){
            sum-=capacity[i];
            ans++,i--;
        }
        return ans;
    }
};