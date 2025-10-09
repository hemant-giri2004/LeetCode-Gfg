class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n=skill.size();
        int m=mana.size();
        vector<long long> done(n,0);

        for(int pot=0; pot <m ; pot++){
            //forward pass : ensure both wizard and portion are ready
            for(int wiz=0; wiz<n ; wiz++){
                if(wiz==0)
                    done[wiz]=done[wiz] + 1LL * mana[pot] * skill[wiz];
                else
                    done[wiz]=max(done[wiz],done[wiz-1])+ 1LL * mana[pot] * skill[wiz];
            }
            
            //backword pass : ensure syncronization, next wizard starts immediately when previous wizard done with potion
            for(int wiz=n-2;wiz>=0;wiz--){
                done[wiz]=done[wiz+1]-1LL * mana[pot]*skill[wiz+1]; 
            }
        }
        return done[n-1];
    }   
};