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

func max(i,j int)int{
    if i <= j {
        return j
    }
    return i
}
func characterReplacement(s string, k int) int {
    cnt := make([]int,26)
    start,maxlen := 0,0
    for i := 0 ; i < len(s) ; i++ {
        cnt[int(s[i]) - int('A')]+=1
        maxi,sum := 0,0
        for j:= 0 ; j < 26 ; j++ {
            sum+=cnt[j]
            maxi = max(maxi,cnt[j])
        }
        sum-=maxi
        if(sum > k){
            cnt[int(s[start]) - int('A')]-=1
            start+=1
        }
        maxlen = max(maxlen,i - start + 1)
    }
    return maxlen
}