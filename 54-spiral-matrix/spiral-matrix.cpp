class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector<bool>> track(matrix.size(), vector<bool>(matrix[0].size(), false));
        int x = 0, y = 0;
        vector<vector<int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};
        int rows = matrix.size();
        int cols = matrix[0].size();
        int count = 0;
        int idx = 0;
        vector<int> ans;
        while(count < rows*cols){
            ans.push_back(matrix[x][y]);
            track[x][y] = true;
            if(!(x+dir[idx][0] >= 0 && y+dir[idx][1] >= 0 && x+dir[idx][0] < rows && y+dir[idx][1] < cols) || track[x+dir[idx][0]][y+dir[idx][1]]){
               idx = (idx+1)%4;
            }
            x+=dir[idx][0];
            y+=dir[idx][1];
            count++;
        }

        return ans;
    }
};