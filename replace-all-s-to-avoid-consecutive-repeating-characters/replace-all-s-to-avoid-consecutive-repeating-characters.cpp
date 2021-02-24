class Solution {
public:
    string modifyString(string s) {
        if(s.size() == 1 && s[0] == '?')return "a";
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '?'){
                if(i == 0){
                    for(int p = 0 ; p < 26 ; p++){
                        if(s[i+1] != 'a' + p){
                            s[i] = 'a'+p;
                        }
                    }
                }else if(i == s.size() - 1){
                    for(int p = 0 ; p < 26 ; p++){
                        if(s[i-1] != 'a' + p){
                            s[i] = 'a'+p;
                        }
                    }
                }else{
                    for(int p = 0 ; p < 26 ; p++){
                        if(s[i-1] != 'a' + p && s[i+1] != 'a' + p ){
                            s[i] = 'a'+p;
                        }
                    }
                }
            }
        }
        return s;
    }
};