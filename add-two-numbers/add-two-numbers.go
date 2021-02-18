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
/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
    var ptr *ListNode
    ptr = &ListNode{}
    ans := ptr
    carry := 0
    for ;l1 != nil && l2 != nil; {
        ptr.Next =  &ListNode{(l1.Val + l2.Val + carry)%10,nil}
        carry = (l1.Val + l2.Val + carry)/10
        l1 = l1.Next
        l2 = l2.Next
        ptr = ptr.Next
    }
    for ;l1 != nil; {
        ptr.Next =  &ListNode{(l1.Val + carry)%10,nil}
        carry = (l1.Val + carry)/10
        l1 = l1.Next
        ptr = ptr.Next
    }
    for ;l2 != nil; {
        ptr.Next =  &ListNode{( l2.Val + carry)%10, nil}
        carry = (l2.Val + carry)/10
        l2 = l2.Next
        ptr = ptr.Next
    }
    
    if carry == 1 {
        ptr.Next =  &ListNode{carry, nil}
    }
    
    ptr = ans.Next
    return ptr
    
}
