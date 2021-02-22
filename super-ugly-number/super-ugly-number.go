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

func min(i,j int)int{
    if i < j {
        return i
    }
    return j
}
func nthSuperUglyNumber(n int, primes []int) int {
    ugly := make([]int,n+1)
    for i := range ugly {
        ugly[i] = -1
    }
    ugly[1] = 1
    idx := make([]int,len(primes))
    for i := range idx {
        idx[i] = 1
    }
    for i := 2 ; i <= n ; i++ {
        ugly[i] = ugly[idx[0]]*primes[0]
        for j := 0 ; j < len(primes) ; j++ {
            ugly[i] = min(ugly[i],ugly[idx[j]]*primes[j])
        }
        for j := 0 ; j < len(primes) ; j++ {
            if( ugly[i] == ugly[idx[j]]*primes[j] ){
                idx[j]++
            }
        }
    }
    return ugly[n]
}