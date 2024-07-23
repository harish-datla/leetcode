class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        sort(score.begin(),score.end(), [&](vector<int>& left, vector<int>& right){
            return left[k] > right[k];
        });
        return score;
    }
};