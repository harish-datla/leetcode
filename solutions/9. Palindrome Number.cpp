const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        long num = 0;
        for(int i = x; i > 0; i/=10)
        {
            int digit = i % 10;
            num = num*10 + digit;
        }         
        return num == x;
    }
};