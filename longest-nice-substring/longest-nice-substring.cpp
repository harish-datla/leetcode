class Solution {
public:
    string longestNiceSubstring(string s) {
        string ans = "";
        int maxi = -1;
        for(int i = 0 ; i < s.size() ; i++){
            
            for(int j = i ; j < s.size() ; j++){
                vector<int> a(26,0);
                for(int k = i ; k <= j ; k++){
                    if(s[k] - 'a' >= 0 && s[k] - 'a' <= 26 ){
                        a[s[k] - 'a'] = a[s[k] - 'a'] | (1 << 0) ;
                       // cout << "sc" <<  a[s[k] - 'a'] << endl;
                    }else if(s[k] - 'A' >= 0 && s[k] - 'A' <= 26){
                        a[s[k] - 'A'] = a[s[k] - 'A'] | (1 << 1) ;
                        //cout << "cc" <<a[s[k] - 'A'] << endl;
                    }
                }
                
                // if (i == 3 && j == 5){
                //     for(int i = 0 ; i < 26 ; i++){
                //         cout << a[i] << endl;
                //     }
                // }
                bool flag = true;
                for(int p = 0 ; p < 26 ; p++){
                    if(a[p] != 3 && a[p] != 0 ){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    if(j - i + 1 > maxi){
                        ans = s.substr(i,j-i+1);
                        maxi = j-i+1;
                    }
                
                } 
            }
            
        }
        return ans;
    }
};