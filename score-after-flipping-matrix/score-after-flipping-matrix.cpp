class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int N = A[0].size() ;
        int M = A.size();
        int ans = 0;
        ans = (1 << N-1)*M;
        for(int j = 1 ; j < N ; j++){
            int cur = 0;
            for(int i = 0 ; i < M ; i++){
             cur+= A[i][j] == A[i][0];    
            }
            ans+=max(cur,M-cur)*(1 << N - j - 1);
        }
        return ans;
    }
};
