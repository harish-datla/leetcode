class Solution {
public:
    long long removeZeros(long long n) {
        string num = to_string(n);
        string ans = "";
        for(int i = 0 ; i < num.size() ; i++){
            if(num[i] == '0')continue;
            ans+=num[i];
        }
        return stol(ans);
    }
};