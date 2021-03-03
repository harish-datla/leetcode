class Solution {
public:
    long mod = 1e9+7;
    int countPairs(vector<int>& d) {
        unordered_map<long,long> mp;
        long long ans = 0;
        
            for(int i = 0 ; i < d.size() ; i++){
                for(int j = 1 ; j <= (1 << 22) ; j*=2){
                    if(mp.count(j - d[i])){
                        ans = (ans%mod + mp[j - d[i]]%mod)%mod;
                    }
                }
                mp[d[i]]+=1;
            }
        
        return ans;
    }
};

