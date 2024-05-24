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
    int gcd(int a,int b){
        if(a == 0)return b;
        return gcd(b%a,a);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* dummyHead = head;

        while(head && head->next){
            //cout << head->val << " ";
            ListNode* ptr = head->next;
            head->next = new ListNode(gcd(head->val,head->next->val));
            head->next->next = ptr;
            head = head->next->next;
        }
        head = dummyHead;
        //delete(dummyHead);
        return head;
    }
};