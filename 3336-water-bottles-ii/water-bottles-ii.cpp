class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = 0;
        int drunk = numBottles;
        int emptyBottles = numBottles;
        while(emptyBottles >= numExchange){
            drunk+=1;
            emptyBottles-=numExchange;
            emptyBottles+=1;
            numExchange+=1;
        }
        return drunk;
    }
};