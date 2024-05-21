class Solution {
public:

    int fill(vector<vector<int>>& grid, int i , int j){
        int ans = INT_MIN;
        for(int x = -1 ; x <= 1 ; x++){
            for(int y = -1 ; y <= 1 ; y++){
                ans = max(ans, grid[i+x][j+y]);
            }
        }
        return ans;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
       vector<vector<int>> out(n - 2 , vector<int>(n - 2 , 0));

       for(int i = 1 ; i < n-1 ; i++){
            for(int j = 1 ; j < n - 1 ; j++){
                out[i-1][j-1] = fill(grid, i , j);
            }
       }
       return out; 
    }
};