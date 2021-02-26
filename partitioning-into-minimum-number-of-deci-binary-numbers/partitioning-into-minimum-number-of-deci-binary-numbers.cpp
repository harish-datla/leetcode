class Solution {
public:
    int minPartitions(string n) {
        int ans = -1;
        int len = n.size();
        for(int i = 0 ; i < len ; i++){
            ans = max(ans,n[i] - '0');
        }
        return ans;
    }
};