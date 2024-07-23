class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> mp;
        for(int i = 0 ; i < names.size() ; i++){
            mp.push_back({heights[i],names[i]});
        }
        sort(mp.rbegin(),mp.rend());
        vector<string> output;
        for(int i = 0 ; i < mp.size() ; i++){
            names[i] = mp[i].second;
        } 
        return names;
    }
};