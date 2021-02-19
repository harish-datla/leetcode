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
    if i < j {
        return j
    }
    return i
}
func longestOnes(A []int, K int) int {
    start,maxlen,cnt := 0,0,0
    
    for i := 0 ; i < len(A) ; i++{
        if A[i] == 0{
            cnt++
        }
        if cnt > K {
            if A[start] == 0 {
                cnt--
            }
            start++
        }
        maxlen = max(maxlen, i - start + 1)
    }
    return maxlen
}