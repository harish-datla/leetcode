/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        swapNodeValuesOddLevels(root->left, root->right, 1);
        return root;
    }

    void swapNodeValuesOddLevels(TreeNode* left, TreeNode* right, int level){
        if(!left || !right)return;
        if(level%2){
            swap(left->val, right->val);
        }
        swapNodeValuesOddLevels(left->left, right->right, level+1);
        swapNodeValuesOddLevels(left->right, right->left, level+1);
    }
};