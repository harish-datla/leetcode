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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() == 0)return nullptr;
        auto max_iter = max_element(nums.begin(),nums.end());
        // if(max_iter == nums.begin()){
        //     TreeNode* root = new TreeNode(*max_iter);
        //     vector<int> right(max_iter+1, nums.end());
        //     root->right = constructMaximumBinaryTree(right);
        //     return root;
        // }
        // if(max_iter == nums.end()){
        //     TreeNode* root = new TreeNode(*max_iter);
        //     vector<int> left(nums.begin(), max_iter);
        //     root->left = constructMaximumBinaryTree(left);
        //     return root;
        // }
        TreeNode* root = new TreeNode(*max_iter);
        vector<int> left(nums.begin(), max_iter);
        vector<int> right(max_iter+1, nums.end());
        root->left = constructMaximumBinaryTree(left);
        root->right = constructMaximumBinaryTree(right);
        return root;
    }
};