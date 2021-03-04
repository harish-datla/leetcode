class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        int vis[n] ;
        memset(vis,0,sizeof(int)*n);
        char d[n+5];
        strcpy(d, dominoes.c_str());
        int l = -1;
        int r = -1;
        for(int i = 0 ; i < n ; i++){
            if(d[i] == 'R' ){
                l = i;
            }
            if(d[i] == 'L'){
                r = i;
                //cout << l << " " << r << endl;
                if(r > l && l !=-1 && r-l>1){
                   memset(vis+l,1,sizeof(int)*(r-l));
                   if((r-l)%2 == 0){
                       d[l+(r-l)/2] = '.';
                       memset(d+l,'R',sizeof(char)*((r-l)/2));
                       memset(d+l+(r-l)/2 + 1,'L',sizeof(char)*((r-l)/2));
                   }else{
                       memset(d+l,'R',sizeof(char)*((r-l)/2 + 1));
                       memset(d+l+(r-l)/2 + 1,'L',sizeof(char)*((r-l)/2 + 1));
                       
                   }
                }
                r = -1;
                l = -1;
            }
        }
        //return d;
        for(int i = 0 ; i < n ; i++){
            if(d[i] == 'L' && !vis[i]){
                int j = i-1;
                vis[i] = 1;
                //cout << j << " " << vis[j] << endl;
                while(j>= 0&& !vis[j] && d[j] == '.'){
                    d[j] = 'L';
                    vis[j] = true;
                    j--;
                }
            }
            else if(d[i] == 'R' && !vis[i]){
                int j = i+1 ;
                vis[i] = 1;
                while(j < n && !vis[j] && d[j] == '.'){
                    d[j] = 'R';
                    vis[j] = 1;
                    j++;
                }
            }
        }
        string ans(d);
        return ans;
    }
};