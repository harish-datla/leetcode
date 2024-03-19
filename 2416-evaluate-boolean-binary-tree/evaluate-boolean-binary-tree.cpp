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
    bool evaluateTree(TreeNode* root) {
       switch(root->val){
            case 0:
                return 0;
                break;
            case 1:
                return 1;
                break;
            case 2:
                return evaluateTree(root->left) || evaluateTree(root->right);
                break;
            case 3:
                return evaluateTree(root->left) && evaluateTree(root->right);
                break;
            default:
                break;
       }
        return false;
    }
};