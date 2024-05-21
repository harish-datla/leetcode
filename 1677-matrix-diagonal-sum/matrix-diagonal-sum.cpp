class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        for(int i = 0 ; i < mat.size() ; i++){
            ans+=mat[i][i];
            ans+=mat[i][mat[0].size() - 1 - i];
        }
        if(mat.size()%2)return ans-mat[mat.size()/2][mat.size()/2];
        return ans;
    }
};