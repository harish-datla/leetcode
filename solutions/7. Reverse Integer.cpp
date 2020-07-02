const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();
class Solution {
public:
    int reverse(int X) {
        int sign;
        long x = X;;
        if(x < 0) sign = 0;
        else sign = 1;
        long num = 0;
        x = abs(x);
        while(x)
        {
            num = num*10 + x%10;
            x/=10;
        }
        if(num > pow(2,31) - 1 || num < -pow(2,31))
            return 0;
        if(sign)
            return num;
        return -num;
    }
};