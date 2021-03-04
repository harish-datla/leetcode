
class Solution {
public:
    vector<string> invalidTransactions(vector<string>& t) {
        vector<vector<string>> trcx;
        for(int i = 0 ; i < t.size() ; i++){
            vector<string> temp;
            istringstream ss(t[i]);
            string token;
            while(getline(ss,token,',')){
                temp.push_back(token);
                //cout << token << endl;
            }
            trcx.push_back(temp);
        }
        vector<int> vis(t.size(),0);
        for(int i = 0 ; i < trcx.size() ; i++){
            for(int j = i+1 ; j < trcx.size() ; j++){
                if(abs(stoi(trcx[i][1].c_str()) - stoi(trcx[j][1].c_str())) <= 60 && trcx[i][0] == trcx[j][0] && trcx[i][3] != trcx[j][3]){
                    vis[i] = true;
                    vis[j] = true;
                }
                if(stoi(trcx[i][2]) >= 1000){
                    vis[i] = true;
                }
                
                if(stoi(trcx[j][2]) >= 1000){
                    vis[j] = true;
                }
            }
        }
        vector<string> ans;
        for(int i = 0 ; i < trcx.size() ; i++){
            if(vis[i]){
                ans.push_back(t[i]);
            }
        }
        
        
        
       return ans; 
       
    }
};