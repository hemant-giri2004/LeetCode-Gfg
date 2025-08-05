class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=baskets.size();
        int ans=0;
        for(auto fruit :fruits){
            int j=0;
            while(j<n){
                if(baskets[j]>= fruit){
                    baskets[j]=0;
                    break;
                }
                j++;
            }
            if(j==n){
                ans+=1;
            }
        }
        return ans;
    }
};