
 
const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();
class Solution {

public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        return merge(l1,l2);
    }
    
private:
    ListNode* merge(ListNode* l1, ListNode* l2){
        if(!l1 && !l2)return NULL;
        if(!l1){
            ListNode* tmp=l2;
            tmp->next=merge(l1,l2->next);
            return tmp;
        }
        else if(!l2){
            ListNode* tmp=l1;
            tmp->next=merge(l1->next,l2);
            return tmp;
        }
        else if(l1->val<l2->val){
            ListNode* tmp=l1;
            tmp->next=merge(l1->next,l2);
            return tmp;
        }
        else{
            ListNode* tmp=l2;
            tmp->next=merge(l1,l2->next);
            return tmp;
        }
    }
};
    