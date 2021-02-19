import "math"
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
func reverse(x int) int {
    
    ans := 0
    flag := false
    if x < 0 {
        x = -x
        flag = true
    }
    for ; x > 0  ; {
        ans = ans*10 + x%10
        x = x /10
    } 
    
    if flag{
       ans = -ans
    }
    
    if ans > int(math.Pow(2,31)) - 1 || ans < -int(math.Pow(2,31)) {
        return 0
    }
    return ans
}