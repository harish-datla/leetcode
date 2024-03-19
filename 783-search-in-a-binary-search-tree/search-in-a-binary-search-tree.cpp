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
    TreeNode* searchBST(TreeNode* root, int val) {
        ios::sync_with_stdio(false);
      cin.tie(0);
        if(!root) return NULL;
        if(root->val == val){
            return root;
        }
        if(root->val > val){
            TreeNode* left = searchBST(root->left, val);
            if(left)return left;
        }else{
             TreeNode* right = searchBST(root->right, val);
            return right;
        }
       return NULL;

    }
};