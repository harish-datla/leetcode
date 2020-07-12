const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cerr.tie(NULL);
    return NULL;
}();
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
        queue<pair<TreeNode*,int>> q;
       
        
        vector<double> out;
         if(root == nullptr) return out;
        q.push({root,0});
        int level = 0;
        while(!q.empty())
        {
       double x = 0;
            int no = 0;
         while(q.front().second == level)
         {
         TreeNode* temp = q.front().first;
         x = x + temp->val;
         no++;
         if(temp->right && temp->left)
         {
             q.push({temp->left,level+1});
             q.push({temp->right,level+1});
         }
         else if(temp->left)
         {
             q.push({temp->left,level+1});
         }
         else if(temp->right)
         {
             q.push({temp->right,level+1});
         }
             q.pop();
             
             if(q.empty())
             {
                 break;
             }
         }
            out.push_back(x/no);
            
         level++;
        }
      return out;  
        
    }
};
