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
    vector<int> largestValues(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        int max = INT_MIN;
        vector<int> ans;
        while(true && !q.empty()){
            queue<TreeNode*> p;
            while(!q.empty()){
                TreeNode* node = q.front();
                q.pop();
                if(node->val > max)
                    max = node->val;
                if(node->left){
                    p.push(node->left);
                }
                if(node->right){
                    p.push(node->right);
                }
            }
            ans.push_back(max);
            q = p;
            max = INT_MIN;
        }
        return ans;
    }
};