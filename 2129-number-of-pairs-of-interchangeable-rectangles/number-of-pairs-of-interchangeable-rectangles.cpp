class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& r) {
        unordered_map<double,int> mp;

        for(int i = 0 ; i < r.size() ; i++){
            mp[(double)r[i][0]/(double)r[i][1]]+=1;
        }
        long long int ans = 0;
        for(auto it = mp.begin() ; it != mp.end() ; it++){
            long long int n = it->second;
            if(n > 1)ans+=((n)*(n-1))/2;
        }
        return ans;
    }
};