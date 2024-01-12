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

const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* ptr = new ListNode();
        ListNode* ans = ptr;

        while(l1 && l2){
            ptr->next = new ListNode((l1->val + l2->val + carry)%10);
            carry = (l1->val + l2->val + carry)/10;
            l1 = l1->next;
            l2 = l2->next;
            ptr = ptr->next;
        }
        while(l1){
            ptr->next = new ListNode((l1->val + carry)%10);
            carry = (l1->val + carry)/10;
            l1 = l1->next;
            ptr=ptr->next;
        }
        while(l2){

            ptr->next = new ListNode((l2->val + carry)%10);
            carry = (l2->val + carry)/10;
            l2 = l2->next;
            ptr=ptr->next;
        }

        if(carry){
            ptr->next = new ListNode((carry)%10);
        }
        return ans->next;
    }
};