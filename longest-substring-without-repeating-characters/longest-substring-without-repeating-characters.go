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
func lengthOfLongestSubstring(s string) int {
    mp := [128]int{}
    
    maxlen := 0
    temp := 0

    for i := 0 ; i < len(s) ; i++ {
        val  := mp[s[i]]
        //fmt.Println(i)
        if val > 0 {
            i = val-1
            if(temp > maxlen){
                maxlen = temp
            }
            for j := 0 ; j < 128 ; j++{
                mp[j] = 0
            }
            temp = 0
        }else{
            temp = temp + 1
            mp[s[i]] = i+1
        }
    }
    if(temp > maxlen){
                maxlen = temp
            }
    
    return maxlen
}
