/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        countAvgSubtreeNodes(root, ans);
        return ans;
    }
    pair<int, int> countAvgSubtreeNodes(TreeNode* root, int& ans) {
        if(!root)return {0,0};
        pair<int, int> statsLeft = countAvgSubtreeNodes(root->left, ans);
        pair<int, int> statsRight = countAvgSubtreeNodes(root->right,ans);
        if(root->val == (root-> val + statsLeft.first + statsRight.first)/(1 + statsLeft.second + statsRight.second)){
            ans+=1;
        }

        return {root->val + statsLeft.first + statsRight.first, 1 + statsLeft.second + statsRight.second};

    }
};