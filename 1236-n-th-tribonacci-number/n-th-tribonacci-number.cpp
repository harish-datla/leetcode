class Solution {
public:
    int a[38] = {0};
    Solution(){
        a[0] = 0;
        a[1] = 1;
        a[2] = 1;
        for(int i = 3 ; i < 38 ; i++){
            a[i] = a[i-1] + a[i-2] + a[i-3];
        }
    }
    int tribonacci(int n) {
        return a[n];
    }
};