class Solution {
public:

    int sumOfDigits(int x){
        int d = 0;
        while(x != 0){
            d+=(x%10);
            x/=10;
        }
        return d;
    }

    int sumOfTheDigitsOfHarshadNumber(int x) {
        int d = sumOfDigits(x);
        if(x%d == 0){
            return d;
        }
        return -1;
    }
};