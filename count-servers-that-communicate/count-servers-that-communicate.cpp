class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> rows(grid.size(), 0);
        vector<int> cols(grid[0].size(), 0);
        int servers = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                servers+=grid[i][j];
                rows[i]+=grid[i][j];
                cols[j]+=grid[i][j];
            }
        }
        
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(rows[i] == 1 && cols[j] == 1 && grid[i][j] == 1)servers--;
            }
        }
        return servers;
    }
};