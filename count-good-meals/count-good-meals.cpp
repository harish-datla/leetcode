static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();

class Solution {
public:
    long mod = 1e9+7;
    int countPairs(vector<int>& d) {
        unordered_map<long,long> mp;
        long long ans = 0;
            for(int i = 0 ; i < d.size() ; i++){
                for(int j = 1 ; j <= (1 << 22) ; j*=2){
                    if(mp.count(j - d[i])){
                        ans = (ans + mp[j - d[i]])%mod;
                    }
                }
                mp[d[i]]+=1;
            }
        
        return ans;
    }
};

