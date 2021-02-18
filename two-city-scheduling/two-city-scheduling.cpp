/*
                       _oo0oo_
                      o8888888o
                      88" . "88
                      (| -_- |)
                      0\  =  /0
                    ___/`---'\___
                  .' \\|     |// '.
                 / \\|||  :  |||// \
                / _||||| -:- |||||- \
               |   | \\\  -  /// |   |
               | \_|  ''\---/''  |_/ |
               \  .-\__  '-'  ___/-. /
             ___'. .'  /--.--\  `. .'___
          ."" '<  `.___\_<|>_/___.' >' "".
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `_.   \_ __\ /__ _/   .-` /  /
     =====`-.____`.___ \_____/___.-`___.-'=====
                       `=---='
 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 SHAMELESLLY COPIED TEMPLATE FROM MULTIPLE SOURCES - baba_yaga
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/  
// Acceptance and tolerance for all religions, including absence of beleif, pagans, spiritualism.
// Democratic scientechnocracy.
// Free and quality education for all.

const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        vector<vector<int>> a(n+1,vector<int>(n/2 + 1));
        for(int i = 1 ; i <= n ; i++){
            for(int j = 0 ; j <= min(n/2,i) ; j++){
                if(j == 0){
                    a[i][0] = a[i-1][0] + costs[i-1][1];
                }
                else if(i == j){
                    a[i][j] = a[i-1][j-1] + costs[i-1][0];
                }
                else{
                    a[i][j] = min(a[i-1][j-1] + costs[i-1][0],a[i-1][j] + costs[i-1][1]);
                    
                }
            }
        }
        return a[n][n/2];
    }
};
// 0  20 220 270 290
// 10 
// 40
// 440
// 470
    

