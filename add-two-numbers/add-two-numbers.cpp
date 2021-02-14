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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr = new ListNode();
        ListNode* ans = ptr;
        int carry = 0;
        while(l1 && l2){
            ptr->next = new ListNode((l1->val + l2->val + carry)%10);
            carry = (l1->val + l2->val + carry)/10;
            l1 = l1->next;
            l2 = l2->next;
            ptr = ptr->next;
        }
        
        while(l1){
            ptr->next = new ListNode((l1->val + carry)%10);
            carry = (l1->val +  carry)/10;
            l1 = l1->next;
            ptr = ptr->next;
        }
        
         while(l2){
            ptr->next = new ListNode((l2->val + carry)%10);
            carry = (l2->val +  carry)/10;
            l2 = l2->next;
            ptr = ptr->next;
        }
        
        if(carry){
            ptr->next = new ListNode(carry);
        }
        
        ptr = ans->next;
        
        return ptr;
    
     
        
    }
};