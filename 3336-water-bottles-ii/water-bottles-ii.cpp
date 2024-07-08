class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
      int numDrink = numBottles;
      int emptyBottles = numBottles;
      while(emptyBottles >= numExchange){
        emptyBottles-=numExchange;
        numDrink+=1;
        emptyBottles+=1;
        numExchange+=1;
      }
      return numDrink;  
    }
};