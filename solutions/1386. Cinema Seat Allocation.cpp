class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<pair<int,int>,int> mp;
        int ans = 0;
        map<int,int> rows;
        int x = 0;
        for(int i = 0 ; i < reservedSeats.size() ; i++){
            mp[{reservedSeats[i][0],reservedSeats[i][1]}] =1;
            if(!rows[reservedSeats[i][0]]){
                rows[reservedSeats[i][0]] = 1;
                x+=1;
            }
            
        }
        // cout << x << endl;
        for(auto it = rows.begin() ; it!= rows.end() ; it++){
            // cout << it->first << " " << it->second<< endl;
            if(it->second >= 1){
            int i = it->first-1;
            bool middle = false;
            if(!mp[{i+1,2}] && !mp[{i+1,3}] && !mp[{i+1,4}] && !mp[{i+1,5}] ){
                middle = true;
                ans+=1;
            }
            if(!mp[{i+1,6}] && !mp[{i+1,7}] && !mp[{i+1,8}] && !mp[{i+1,9}] ){
                middle = true;
                ans+=1;
            }
            if(!middle &&!mp[{i+1,4}] && !mp[{i+1,5}] && !mp[{i+1,6}] && !mp[{i+1,7}]  ){
                ans+=1;
            }
            }
        }
        // cout << ans << endl;
        ans+=(2*(n-x));
        return ans;
    }
};
​
