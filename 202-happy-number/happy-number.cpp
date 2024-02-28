class Solution {
public:
    int getSquareDigitSum(int n){
        int sum = 0;
        while(n){
            sum = sum + (n%10)*(n%10);
            n/=10;
        }
        return sum;
    }

    bool floydCycleDetection(int n){
        int slow = n, fast = n;

        do{
            slow = getSquareDigitSum(slow);
            fast = getSquareDigitSum(getSquareDigitSum(fast));
        }while(slow!=fast);

        return slow==1 ? true : false;
    }


    bool isHappy(int n) {
        return floydCycleDetection(n);
    }
};