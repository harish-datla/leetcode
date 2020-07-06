class Solution {
public:

    bool isValidSudoku(vector<vector<char>>& board) {
        map<pair<int,int>,bool> mp;
        map<pair<int,int>,bool> r;
        map<pair<int,int>,bool> c;
        map<pair<int,int>,int> cells;
        
        cells[{0,0}] = 1;
        cells[{0,1}] = 2;
        cells[{0,2}] = 3;
        cells[{1,0}] = 4;
        cells[{1,1}] = 5;
        cells[{1,2}] = 6;
        cells[{2,0}] = 7;
        cells[{2,1}] = 8;
        cells[{2,2}] = 9;
        
        
        for(int i = 0 ; i < 9 ; i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                if(mp[{cells[{i/3,j/3}], board[i][j] - '0'}])
                {
                    return false;
                }
                else
                {
                    if(isdigit(board[i][j]))
                    {
                   mp[{cells[{i/3,j/3}], board[i][j] - '0'}] = true ;
                    }
                }
                
                if(r[{i,board[i][j] - '0'}] )
                {
                    return false;
                }
                else
                {
                    if(isdigit(board[i][j]))
                    {
                   r[{i,board[i][j] - '0'}] = true;
                    }   
                }
                
                if(c[{j,board[i][j] - '0'}] )
                {
                    return false;
                }
                else
                {
                    if(isdigit(board[i][j]))
                    {
                   c[{j,board[i][j] - '0'}] = true;
                    }   
                }
            }
        }
        
        return true;
    }
};