class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        sort(timePoints.begin(),timePoints.end());
        int n = timePoints.size();
        
        timePoints.push_back(timePoints[0]);
        int ans = INT_MAX;
        for(int i = 0 ; i < timePoints.size() - 2 ; i++){
            int x ;
            x = (stoi(timePoints[i+1].substr(0,2)) - stoi(timePoints[i].substr(0,2)))*60;
            x+= stoi(timePoints[i+1].substr(3,2)) - stoi(timePoints[i].substr(3,2));
           
            ans = min(ans,x);
        }
        
           int x = ( 23 + stoi(timePoints[n].substr(0,2)) -  stoi(timePoints[n-1].substr(0,2)))*60  + 60 - stoi(timePoints[n-1].substr(3,2)) + stoi(timePoints[n].substr(3,2)) ;
            ans = min(ans,x);
        
        return ans;
        
    }
};