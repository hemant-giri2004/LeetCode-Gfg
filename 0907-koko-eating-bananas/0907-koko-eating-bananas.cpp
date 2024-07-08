class Solution {
public:
    int maxElement(vector<int >&piles){
        int max=INT_MIN;
        for(int i=0;i<piles.size();i++)
            if(max<piles[i])
                max=piles[i];
        return max;
    }
    int canEat(vector<int >p,int b,int h){
        int cntH=0;
        for(auto n:p){
            if(n%b==0)
                cntH+=(n/b);
            else
                cntH+=((n/b)+1);
        }
            return cntH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        //define search space where the ans exits
        int s=1,e=maxElement(piles);
        while(s<e){
            int m=s+(e-s)/2;
            int hrs=canEat(piles,m,h);
            if(hrs>h)
                s=m+1;
            else
                e=m;
        }
        return s;
    }
};