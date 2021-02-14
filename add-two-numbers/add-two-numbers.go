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