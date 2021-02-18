import "sort"
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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

func twoCitySchedCost(costs [][]int) int {
    length := len(costs)
    idx := make([][]int,length)
    
    for i:= 0 ; i < length ; i++ {
        idx[i] = make([]int,2)
        idx[i][0]  = costs[i][0] - costs[i][1]
        idx[i][1] = i
    }
    sort.Slice(idx, func(i,j int ) bool {
        if (len(idx[i]) == 0) && (len(idx[j]) == 0 ){
            return false
        }
        if (len(idx[i]) == 0) || (len(idx[j]) == 0 ){
            return len(idx[i]) == 0
        }
        
        
        return idx[i][0] < idx[j][0]
        
    })
    for i:= 0 ; i < length ; i++{
        fmt.Sprintf("%s %s",costs[idx[i][1]][0], costs[idx[i][1]][1])
    }
    ans := 0
    for i := 0 ; i < length/2 ; i++ {
        ans= ans + costs[idx[i][1]][0]
        ans= ans + costs[idx[i+length/2][1]][1]
    }
    return ans
}