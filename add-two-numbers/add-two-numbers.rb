# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val = 0, _next = nil)
#         @val = val
#         @next = _next
#     end
# end
# @param {ListNode} l1
# @param {ListNode} l2
# @return {ListNode}
def add_two_numbers(l1, l2)
    ptr = ListNode.new()
    ans = ptr
    carry = 0
    while l1 && l2 do
        ptr.next = ListNode.new((l1.val + l2.val + carry)%10)
        carry = (l1.val + l2.val + carry)/10
        l1 = l1.next
        l2 = l2.next
        ptr = ptr.next
    end

    while l1 do
        ptr.next = ListNode.new((l1.val + carry)%10)
        carry = (l1.val + carry)/10
        l1 = l1.next
        ptr = ptr.next
    end

    while l2 do
        ptr.next = ListNode.new((l2.val + carry)%10)
        carry = (l2.val + carry)/10
        l2 = l2.next
        ptr = ptr.next
    end

    if carry != 0
        ptr.next = ListNode.new(carry)
    end

    ptr = ans.next

    return ptr
end