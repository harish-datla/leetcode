class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int numDrink = 0;
        int emptyBottles = 0;
        while(numBottles){
            numDrink+=numBottles;
            emptyBottles+=numBottles;
            numBottles = emptyBottles/numExchange;
            emptyBottles = emptyBottles%numExchange;
        }
        return numDrink;
    }
};