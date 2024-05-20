class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
      vector<pair<char,int>> consLetterFreq;
      char l = s[0];
      int freq = 1;
      for(int i = 1 ; i < s.size() ; i++){
        if(s[i] == s[i-1]){
            freq++;
        }else{
            consLetterFreq.push_back({l,freq});
            l = s[i];
            freq=1;
        }
      }
      consLetterFreq.push_back({l,freq});
      int ans = 0;
      for(int i = 0 ; i < words.size() ; i++){
        vector<pair<char,int>> z;
        string s = words[i];
        char l = s[0];
        int freq = 1;
        for(int i = 1 ; i < s.size() ; i++){
            if(s[i] == s[i-1]){
                freq++;
            }else{
                z.push_back({l,freq});
                l = s[i];
                freq=1;
            }
        }
        z.push_back({l,freq});
        cout << words[i] << endl;
        for(int i = 0 ; i < z.size() ; i++){
            cout << z[i].first << " " << z[i].second << endl; 
        }
        for(int i = 0 ; i < consLetterFreq.size() ; i++){
            cout << consLetterFreq[i].first << " " << consLetterFreq[i].second << endl; 
        }
        if(consLetterFreq.size() == z.size()){
            bool flag = true;
            for(int i = 0 ; i < z.size() ; i++){
                if(consLetterFreq[i].first != z[i].first){
                    flag = false;
                    break;
                }
                if( (consLetterFreq[i].second != z[i].second  && consLetterFreq[i].second  < 3 )|| (consLetterFreq[i].second  >= 3 && consLetterFreq[i].second < z[i].second)){
                    flag = false;
                    break;
                }
            }
            if(flag)ans+=1;
        }
      }
    return ans;
    }
};