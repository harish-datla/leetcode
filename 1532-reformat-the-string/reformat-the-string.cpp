class Solution {
public:
    string reformat(string s) {
        string a="", d= "";
        for(int i = 0 ; i < s.size() ; i++){
            isalpha(s[i])?a.push_back(s[i]):d.push_back(s[i]);
        }
        if(abs(int(a.size() - d.size())) > 1)return "";
        string ans = "";
        for(int i = 0 ; i < min(a.size(), d.size()); i++){
            ans+=d[i];
            ans+=a[i];
        }
        if(a.size() > d.size()){
            ans = a[a.size() - 1] + ans;
        }else if(d.size() > a.size() ){
            ans = ans + d[d.size() - 1] ;
        }
        return ans;
    }
};