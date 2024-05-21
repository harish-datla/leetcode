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
    void sumNumbers(TreeNode* root, int& ans,int sum){
        if(root){
                if(root->left == NULL && root->right == NULL){
                    ans=ans+sum*10 + root->val;
                }    
                sumNumbers(root->left,ans,sum*10+root->val);
                sumNumbers(root->right,ans,sum*10+root->val);
        }
    }

    int sumNumbers(TreeNode* root, int num = 0) {
        if(!root)return 0;
        if(root->left == NULL && root->right == NULL)return num*10+root->val;
        return sumNumbers(root->left, num*10 + root->val) + 
        sumNumbers(root->right, num*10 + root->val);
    }
};