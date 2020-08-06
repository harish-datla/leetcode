class Solution {
public:
    int numSub(string s) {
    long long mod = 1e9+7;
    int ans = 0;
    int i = 0;
    while(i < s.size()){
        long long count = 0;
        bool flag = false;
        while(s[i] == '1' && i < s.size()){
        i++;
        count++;
        flag = true;
        }
        // count = count%mod;
        ans+=(count*(count+1))%mod/2; 
        ans = ans%mod;
        if(!flag)i++;
    }
    
    return ans;
}
​
​
};
