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
var ugly []int


func min(i,j int)int{
    
    if(i < j){
        return i
    }
    return j
} 

func init(){
    ugly = make([]int,1691)
    ugly[1] = 1
    idx1,idx2,idx3 := 1,1,1
    for i := 2 ; i < 1691 ; i++ {
        ugly[i] = min(ugly[idx1]*2,min(ugly[idx2]*3,ugly[idx3]*5))
        if ugly[i] == ugly[idx1]*2 {
            idx1++;
        }
        if ugly[i] == ugly[idx2]*3 {
            idx2++;
        }
        if ugly[i] == ugly[idx3]*5 {
            idx3++;
        }
    }
}


func nthUglyNumber(n int) int {
    return ugly[n];
}