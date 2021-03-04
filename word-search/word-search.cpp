
class Solution {
public:
    int m,n,k;
    bool check(vector<vector<char>>& board, const char* word, int i , int j){
            //cout << m << " " << n << endl;
        if(i < 0 || j < 0 || i >= m || j >= n || *word != board[i][j] || board[i][j] == '\0')return false;      
        if(*(word+1) == '\0')return true;
        char temp = board[i][j];
        board[i][j] = '\0';
        if(check(board,word+1,i-1,j) || check(board,word+1,i+1,j) || check(board,word+1,i,j-1)|| check(board,word+1,i,j+1))
                        return true;
               
        board[i][j] = temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> vis(board.size(),vector<bool>(board[0].size(),false));
         m = board.size();
         n = board[0].size();
        k = word.size() ;
        for(int i = 0 ; i < m ; i++)
            for(int j = 0 ; j < n ; j++)
            {
                    if(check(board,word.c_str(),i,j))
                        return true;
            }
        return false;
    }
};


