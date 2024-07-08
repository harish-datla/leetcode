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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> criticalIndexes;

        int prevValue = head->val;
        head = head->next;
        int idx = 1;
        while(head && head->next){
            if(prevValue < head->val && head->next->val < head->val){
                criticalIndexes.push_back(idx);
            }
            if(prevValue > head->val && head->next->val > head->val){
                criticalIndexes.push_back(idx);
            }

            prevValue = head->val;
            head = head->next;
            idx+=1;
        }
        if(criticalIndexes.size() < 2)return {-1,-1};
        int minAns = INT_MAX;
        int n = criticalIndexes.size();
        for(int i = 1 ; i < n ; i++){
            if(criticalIndexes[i] - criticalIndexes[i-1] < minAns){
                minAns = criticalIndexes[i] - criticalIndexes[i-1];
            }
        }
        int maxAns = criticalIndexes[n-1] - criticalIndexes[0]; 
        return {minAns, maxAns};
    }
};