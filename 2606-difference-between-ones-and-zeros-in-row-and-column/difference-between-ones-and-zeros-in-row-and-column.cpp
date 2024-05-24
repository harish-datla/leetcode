class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
       vector<vector<int>> ans(grid.size(),vector<int>(grid[0].size(),0));
       vector<int> rowSum(grid.size(),0);
       vector<int> colSum(grid[0].size());
       for(int i = 0 ; i < grid.size() ; i++){
            int sum = 0;
            for(int j = 0 ; j < grid[0].size() ; j++){
                sum+=grid[i][j];
            }
            rowSum[i]+=sum;
       }

       for(int j = 0 ; j < grid[0].size() ; j++){
            int sum = 0;
            for(int i = 0 ; i < grid.size() ; i++){
                sum+=grid[i][j];
            }
            colSum[j]+=sum;
       }

       for(int i = 0 ; i < grid.size() ; i++){
        for(int j = 0 ; j < grid[0].size() ; j++){
            ans[i][j] = 2*rowSum[i] + 2*colSum[j] - grid.size() - grid[0].size();
        }
       }
       return ans;
    }
};