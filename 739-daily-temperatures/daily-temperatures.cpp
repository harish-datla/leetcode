class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>> s;
        vector<int> ans(t.size(),0);
        for(int i = 0 ; i < t.size() ; i++){
            while(!s.empty()){
                if(s.top().first < t[i]){
                    ans[s.top().second] = i-s.top().second;
                    s.pop();
                }else{
                    break;
                }
            }
            s.push({t[i],i});
        }
        return ans;
    }
};