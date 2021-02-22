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
vector<int> ugly(1691,-1);
class Solution {
public:
    Solution(){
        ugly[1]  = 1;
        int idx1=1,idx2=1,idx3 = 1;
        for(int i = 2 ; i < 1691 ; i++){
            ugly[i] = min(ugly[idx1]*2, min(ugly[idx2]*3,ugly[idx3]*5));
            if(ugly[i] == ugly[idx1]*2)idx1++;
            if(ugly[i] == ugly[idx2]*3)idx2++;
            if(ugly[i] == ugly[idx3]*5)idx3++;
        } 
    }
    int nthUglyNumber(int n) {
        return ugly[n];
    }
};