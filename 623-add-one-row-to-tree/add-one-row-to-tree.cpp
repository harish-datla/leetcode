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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(root == NULL)return root;
        if(depth == 1){
            TreeNode* node = new TreeNode(val);
            node->left = root;
            return node;
        }
        if(depth == 2){
            TreeNode* nodeLeft = new TreeNode(val);
            TreeNode* nodeRight = new TreeNode(val);
            nodeLeft->left = root->left;
            nodeRight->right = root->right;
            root->left = nodeLeft;
            root->right = nodeRight;
        }
        addOneRow(root->left, val, depth - 1);
        addOneRow(root->right, val, depth - 1);
        return root;
    }
};