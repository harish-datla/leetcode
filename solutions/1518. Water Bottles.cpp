class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange, int emptyBottles = 0) {
        
        if(numBottles + emptyBottles < numExchange)return numBottles;
        
        return numBottles + numWaterBottles((numBottles + emptyBottles )/ numExchange, numExchange,(numBottles + emptyBottles )% numExchange);
        
    }
};
