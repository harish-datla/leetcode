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

 auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* head = list1;
         int x = b-a;
        while(--a)head = head->next;
        ListNode* tail = head->next;
        while(x--){
            cout << tail->val << endl;
            ListNode* temp = tail;
            tail = temp->next;
            delete(temp);
        }
        head->next = list2;
        while(list2->next){
            list2 = list2->next;
        }
        list2->next = tail->next;
        return list1;
    }
};