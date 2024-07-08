class Solution {
public:
    int passThePillow(int n, int time) {
       int index = (time)%(n-1); 
       int direction = (time)/(n-1);

       if(direction%2)return n-index;
       return index+1;
    }
};