const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int sum = 0;
       ListNode* res = new ListNode(0);
       ListNode* out = res;
       while(l1 || l2)
       {
           int x = l1 ? l1->val : 0;
           int y = l2 ? l2->val : 0;
           sum  +=(x + y);
           res->next = new ListNode(sum%10);
           sum/=10;
           l1 = l1 ?l1->next:l1;
           l2 = l2 ?l2->next:l2;
           
           res = res->next;
       }
       if(sum)
       {
           res->next = new ListNode(sum);
       }
        res = out->next;
        delete out;
        return res;
    }
};