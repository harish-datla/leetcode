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
    int characterReplacement(string s, int k) {
        vector<int> cnt(26,0);
        int start = 0,maxlen = 0;
        for(int i = 0 ; i < s.size() ; i++){
            cnt[s[i] - 'A']++;
            int x = 0;
            int maxi = 0;
            for(int i = 0 ; i < 26 ; i++){
                x+=cnt[i];
                maxi = max(maxi,cnt[i]);
            }
            x -= maxi;
            if(x > k){
                cnt[s[start] - 'A']--;
                start++;
            }
            maxlen = max(maxlen, i - start + 1);
        }
        return maxlen;
    }
};