class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int result=numBottles;
        while(numBottles>=numExchange){
            int newBottles=(numBottles/numExchange);
            result+=newBottles;
            numBottles%=numExchange;
            numBottles+=newBottles;
        }
        return result;
    }
};