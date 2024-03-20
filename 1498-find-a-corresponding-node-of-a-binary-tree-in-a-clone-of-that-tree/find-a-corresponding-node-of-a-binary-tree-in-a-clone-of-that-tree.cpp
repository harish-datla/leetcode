/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(original == nullptr || cloned == nullptr || target == nullptr)
            return nullptr;
        
        if(original == target)return cloned;
        TreeNode* ptr1 = getTargetCopy(original->left, cloned->left, target);
        if(ptr1) return ptr1;
        return getTargetCopy(original->right, cloned->right, target);
    }
};