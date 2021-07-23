class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int ans = 0;
        for(int i = 1 ; i < rungs.size() ; i++){
            ans+=(rungs[i] - rungs[i-1]-dist)/dist;
            ans+=((rungs[i] - rungs[i-1]-dist)%dist > 0);
        }
        ans+=(rungs[0] - dist)/dist;
        ans+=((rungs[0] -dist)%dist > 0);
        
        return ans;
    }
};