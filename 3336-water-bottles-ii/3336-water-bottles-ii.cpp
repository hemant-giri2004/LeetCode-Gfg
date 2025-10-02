class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange){
        int fb=0;
        int bd=numBottles;
        int eb=numBottles;

        while(eb>=numExchange){
            eb-=numExchange;
            numExchange++;
            bd+=1;
            eb+=1;
        }
        return bd;
    }
};