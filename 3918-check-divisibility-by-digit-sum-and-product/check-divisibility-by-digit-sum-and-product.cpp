class Solution {
public:

    int sumOfDigitSumAndProduct(int n){
        int digitSum = 0, digitProduct = 1;
        while(n){
            digitSum+=(n%10);
            digitProduct*=(n%10);
            n/=10;
        } 
        return digitSum+digitProduct;
    }
    bool checkDivisibility(int n) {
        return  n%sumOfDigitSumAndProduct(n) == 0;
    }
};