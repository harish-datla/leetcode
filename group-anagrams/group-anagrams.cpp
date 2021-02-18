class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,int>> v;
        for(int i = 0 ; i < strs.size() ; i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            v.push_back({s,i});
        }
        sort(v.begin(),v.end());
        
        string temp;
        vector<vector<string>> ans;
        if(strs.size() <= 1 ){
            return {strs};
        }
        bool flag = false;
        for(int i = 0 ; i < v.size() - 1; i++){
            vector<string> tmp;
            temp = v[i].first;
            tmp.push_back(strs[v[i].second]);
            while(i < v.size() - 1 && v[i].first == v[i+1].first ){
                tmp.push_back(strs[v[i+1].second]);
                i++;
                if(i == v.size() - 1){
                    flag = true;
                }
            }
            ans.push_back(tmp);
        }
        if(!flag){
            ans.push_back({strs[v[v.size() - 1].second]});
        }
        return ans;
    }
};