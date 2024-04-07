class Solution {
    private int sumOfTheDigits(int x){
        int sum = 0;
        while(x > 0){
            sum+=(x%10);
            x/=10;
        }
        return sum;
    }
    public int sumOfTheDigitsOfHarshadNumber(int x) {
        int d = sumOfTheDigits(x);
        if(x%d == 0){
            return d;
        }
        return -1;
    }
}