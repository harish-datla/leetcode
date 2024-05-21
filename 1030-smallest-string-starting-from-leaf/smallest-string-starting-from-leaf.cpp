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
    void getAllStrings(TreeNode* root, vector<string>& v,string s){
        if(root){
            string t = s;
            t+=('a'+root->val);
            if(root->left == NULL && root->right == NULL){
                v.push_back(t);
                return;
            }
            getAllStrings(root->left, v, t);
            getAllStrings(root->right, v, t);
        }
    }

    string smallestFromLeaf(TreeNode* root) {
        vector<string> l;     
        getAllStrings(root,l,"");
        for(int i = 0 ; i < l.size() ; i++){
            reverse(l[i].begin(),l[i].end());
            // cout << l[i] << endl;
        }
        sort(l.begin(),l.end());
        return l[0];
    }
};