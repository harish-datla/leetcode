class Solution {
public:
    vector<vector<int>> pascalsTriangle;

    Solution() {
        pascalsTriangle.push_back({1});
        for(int i = 1 ; i < 30 ; i++){
            pascalsTriangle.push_back({1});
            for(int j = 1 ; j < i  ; j++){
                cout << i << " " << j << endl;
                pascalsTriangle[i].push_back(pascalsTriangle[i-1][j-1] + pascalsTriangle[i-1][j]);
            }
            pascalsTriangle[i].push_back({1});
        }
    }
    

    vector<vector<int>> generate(int numRows) {
        return vector<vector<int>>(pascalsTriangle.begin(),pascalsTriangle.begin() + numRows );
    }
};