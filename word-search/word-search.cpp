class Solution {
public:
    vector<vector<int>> dir{{0,1},{0,-1},{-1,0},{1,0}};
    bool check(vector<vector<char>>& board, string word, int i , int j, int n, int w){
        if(w == n)return true;
        if( i >= 0 && j >= 0 && i < board.size() && j < board[0].size() && word[w] == board[i][j] && board[i][j] != '\0')          { 
            //cout << i << " " << j << endl;
            if(w+1 == n)return true;
            char temp = board[i][j];
            board[i][j] = '\0';
            if(check(board,word,i+1,j,n,w+1) || check(board,word,i,j+1,n,w+1) || check(board,word,i-1,j,n,w+1)|| check(board,word,i,j-1,n,w+1) )
                        return true;
               
            board[i][j] = temp;
            return false;
        }
        
        
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0 ; i < board.size() ; i++)
            for(int j = 0 ; j < board[0].size() ; j++)
                    if(check(board,word,i,j,word.size(),0))
                        return true;
        return false;
    }
};

// class Solution {
//     public:
//     	 bool exist(vector<vector<char> > &board, string word) {
//     		 m=board.size();
//     		 n=board[0].size();
//             for(int x=0;x<m;x++)
//                 for(int y=0;y<n;y++)
//                 {
//     				if(isFound(board,word.c_str(),x,y))
//     					return true;
//                 }
//             return false;
//         }
//     private:
//     	int m;
//     	int n;
//         bool isFound(vector<vector<char> > &board, const char* w, int x, int y)
//         {
//     		if(x<0||y<0||x>=m||y>=n||board[x][y]=='\0'||*w!=board[x][y])
//     			return false;
//             if(*(w+1)=='\0')
//                 return true;
//     		char t=board[x][y];
//     		board[x][y]='\0';
//     		if(isFound(board,w+1,x-1,y)||isFound(board,w+1,x+1,y)||isFound(board,w+1,x,y-1)||isFound(board,w+1,x,y+1))
//     			return true; 
//     		board[x][y]=t;
//             return false;
//         }
//     };