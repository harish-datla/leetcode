class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        stack<pair<int,int>> s;
        vector<int> ans(n,0);
        for(int i = 0 ; i < n ; i++){
            while(!s.empty() && s.top().first < t[i]){
                ans[s.top().second] = i-s.top().second;
                s.pop();
            }
            s.push({t[i],i});
        }
        return ans;
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();