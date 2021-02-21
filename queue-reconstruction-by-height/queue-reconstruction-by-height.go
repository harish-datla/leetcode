import "sort"
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

type doubleArray [][]int

func (d doubleArray) Len() int {
    return len(d)
}

func (d doubleArray) Swap(i,j int){
    d[i],d[j] = d[j],d[i]
}

func (d doubleArray) Less(i,j int) bool {
    return d[i][0] > d[j][0] || (d[i][0] == d[j][0] && d[i][1] < d[j][1])   
}

func insert(a [][]int,index int,val []int)[][]int {
    if (len(a) == index){
        return append(a,val)
    }
    a = append(a[:index+1],a[index:]...)
    a[index] = val
    return a
}

func reconstructQueue(people [][]int) [][]int {
    ans := make([][]int,0)
    
    sort.Sort(doubleArray(people))
    for i := 0 ; i < len(people) ; i++{
        ans = insert(ans,people[i][1],people[i])
    }
    
    return ans
}