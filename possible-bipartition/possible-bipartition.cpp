class Solution {
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<vector<int>> graph(N+1);
        for(int i = 0;  i < dislikes.size() ; i++){
            graph[dislikes[i][0]].push_back(dislikes[i][1]);
            graph[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        bool is_bipartite = true;
        vector<int> s(N+1,-1);
        queue<int> q;
        for(int i = 1; i <= N ; i++){
            if(s[i] == -1){
                q.push(i);
                s[i] = 0;
                while(!q.empty()){
                    int v = q.front();
                    q.pop();
                    for(int u : graph[v]){
                        if(s[u] == -1){
                            s[u] = s[v]^1;
                            q.push(u);
                        }
                        else{
                            if(is_bipartite &= (s[u] != s[v])){
                                
                            }else{
                                goto ret;
                            }  
                        }
                    }
                }
            }
        }
        ret :
        return is_bipartite;
    }
};