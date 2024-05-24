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
        for(auto node = head ; node->next != nullptr ; node = node->next->next){
            node->next = new ListNode(gcd(node->val,node->next->val),node->next);
        }
        return head;
    }
};