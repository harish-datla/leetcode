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

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        if(arr.size() == 0)return 0;
       int inc  = 1 , dec = 1, ans = 1;
        
        for(int i = 0 ; i < arr.size() - 1 ; i++){
            if(arr[i] > arr[i+1]){
                inc = dec + 1;
                dec = 1;
            }
            else if(arr[i] < arr[i+1]){
                dec = inc+1;
                inc = 1;
            }
            else{
                inc = 1;
                dec = 1;
            }
            ans = max(ans,max(dec,inc));
        }
        return ans;
    }
};