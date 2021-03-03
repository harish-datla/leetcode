class Solution {
public:
    string alphabetBoardPath(string target) {
        vector<vector<char>> board{{'a','b','c','d','e'},
                                   {'f','g','h','i','j'},
                                   {'k','l','m','n','o'},
                                   {'p','q','r','s','t'},
                                   {'u','v','w','x','y'},
                                   {'z'}
                                  };
        map<char,pair<int,int>> mp;
        for(int i = 0 ; i < board.size() ; i++){
            for(int j = 0 ; j < board[i].size() ; j++){
                mp[board[i][j]] = {i,j};
            }
        }
        int i = 0 , j = 0;
        string ans = "";
        for(int k = 0 ; k < target.size() ; k++){
            pair<int,int> p = mp[target[k]];
            int trow = p.first;
            int tcol = p.second;
            if(target[k] != 'z'){
                if(trow > i){
                    int dec = trow - i;
                    while(dec--){
                        ans+="D";
                    }
                }else{
                    int dec = i - trow;
                    while(dec--){
                        ans+="U";
                    }                   
                }
                if(tcol > j){
                    int dec = tcol - j;
                    while(dec--){
                        ans+="R";
                    }
                }else{
                    int dec = j - tcol;
                    while(dec--){
                        ans+="L";
                    }
                }
                ans+="!";
                 i = trow;
                 j = tcol;
            }
            
            if(target[k] == 'z'){
                pair<int,int> p = mp['u'];
                 int trow = p.first;
                 int tcol = p.second;
                 if(trow > i){
                    int dec = trow - i;
                    while(dec--){
                        ans+="D";
                    }
                }else{
                    int dec = i - trow;
                    while(dec--){
                        ans+="U";
                    }                   
                }
                if(tcol > j){
                    int dec = tcol - j;
                    while(dec--){
                        ans+="R";
                    }
                }else{
                    int dec = j - tcol;
                    while(dec--){
                        ans+="L";
                    }
                }
                ans+="D";
                while(k < target.size() && target[k] == 'z'){
                    ans+="!";
                    k++;    
                }
                if(k < target.size()){
                    ans+="U";
                }
                 k--;
                i = trow;
                j = tcol; 
            }
            
        }
        return ans;
    }
};