class Solution {
public:
    int minAnagramLength(string s) {
        vector<int> div;
        int n = s.size();
        for(int i = 1 ; i*i <= n ; i++){
            if(n%i == 0){
                div.push_back(i);
                if(n/i != i){
                    div.push_back(n/i);
                }
            }
        }
        sort(div.begin(),div.end());
        // for(int i = 0 ; i < div.size() ; i++){
        //     cout << div[i] << endl;
        // }
        for(int i = 0 ; i < div.size() ; i++){
            map<string, bool> mp;
            string p = s.substr(0,div[i]);
            sort(p.begin(),p.end());
            // cout << p << endl;
            mp[p] = true;
            bool flag = true;
            for(int j = div[i] ; j < s.size() ; j+=div[i]){
                string p = s.substr(j,div[i]);
                sort(p.begin(),p.end());
                // cout << p << endl;
                if(mp.find(p) == mp.end()){
                    flag = false;
                    break;
                }
            }
            if(flag){
                return div[i];
            }
        }
        return s.size();
    }
};