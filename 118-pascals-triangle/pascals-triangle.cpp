class Solution {
public:
    vector<vector<int>> pascalsTriangle;

    Solution() : pascalsTriangle(30) {
        
        for(int i = 0 ; i < 30 ; i++){
            pascalsTriangle[i].assign(i+1,1);
            for(int j = 1 ; j < i ; j++){
                pascalsTriangle[i][j] = pascalsTriangle[i-1][j-1] + pascalsTriangle[i-1][j];
            }
        }
    }
    

    vector<vector<int>> generate(int numRows) {
        return vector<vector<int>>(pascalsTriangle.begin(),pascalsTriangle.begin() + numRows );
    }
};