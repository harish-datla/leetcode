class Solution {
public:
    map<vector<int>,bool> mp;
    vector<vector<int>> out;
    void help(vector<int>& c, int t,vector<int> sol)
    {
        if(t == 0)
        {
            sort(sol.begin(),sol.end());
            if(!mp[sol])
            {
                
                out.push_back(sol);
                mp[sol] = true;
                return;
            }
            else
            {
                return;
            }
            
        }
        else if(t < 0)
        {
            return;
        }
        
        for(int i = 0 ; i < c.size() ; i++)
        {
            sol.push_back(c[i]);
            help(c,t - c[i],sol);
            sol.pop_back();
        }
    }
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> sol;
        help(candidates,target,sol);
        
        return out;
    }
};