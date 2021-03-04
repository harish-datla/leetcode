#pragma GCC optimize ("O3")
#define _CRT_SECURE_NO_WARNINGS
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB == NULL) return NULL;
       ListNode* x = headA;
       ListNode* y = headB;
       
       bool flag1 = false;
       bool flag2 = false;
      
       while(x!=y)
       {
           x=x->next;
           if(x == NULL)
           {
               if(flag1)return NULL;
               x = headB;
               flag1 = true;
           }
           y = y->next;
           if(y == NULL)
           {
               if(flag2)return NULL;
               y = headA;
               flag2 = true;
           }
          
       }
           
       return x;
    }
};