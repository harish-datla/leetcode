class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> mp;
        for(int i = 0 ; i < names.size() ; i++){
            mp.push_back({names[i],heights[i]});
        }
        sort(mp.begin(),mp.end(),[&](auto& left, auto& right){
            return left.second > right.second;
        });
        vector<string> output;
        for(int i = 0 ; i < mp.size() ; i++){
            output.push_back(mp[i].first);
        } 
        return output;
    }
};