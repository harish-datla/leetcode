/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
       
       ListNode* ptr1 = head;
        ListNode* ptr2 = head;
       ListNode* prev = head;
        int x = n;
        while(x--){
            ptr1 = ptr1->next;
        }
        
        while(ptr1&& ptr2){
            ptr1 = ptr1->next;
            prev = ptr2;
            ptr2 = ptr2->next;
            
        }
        
        
        if(n == 1 && ptr2 == head){
            return NULL;
        }
        else if(ptr2 == head ){
            head = head->next;
        }
        else
        {
        prev->next = ptr2->next;
        }
        
        return head;
    }
};