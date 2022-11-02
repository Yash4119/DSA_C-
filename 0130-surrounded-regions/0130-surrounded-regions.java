class Solution {
    
    public void dfs(char [][] board, int m,int n,int i, int j){
        if(i<0 || j<0 || i>=m || j>=n || board[i][j] != 'O'){
            return;
        }
        
        board[i][j] = '#';
        
        dfs(board,m,n,i+1,j);
        dfs(board,m,n,i-1,j);
        dfs(board,m,n,i,j+1);
        dfs(board,m,n,i,j-1);
    }
    
    public void solve(char[][] board) {
        
        int m = board.length;
        int n = board[0].length;
        
//         We will perform DFS for the first and the Last Column
        for(int i=0;i<n;i++){
            if(board[0][i]=='O'){
                dfs(board,m,n,0,i);
            }
            if(board[m-1][i]=='O'){
                dfs(board,m,n,m-1,i);
            }
        }
        
//         No we will perform dfs fort he 1st and the last row 
        for(int i=0;i<m;i++){
            if(board[i][0]=='O'){
                dfs(board,m,n,i,0);
            }
            if(board[i][n-1]=='O'){
                dfs(board,m,n,i,n-1);
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
                if(board[i][j] == '#'){
                    board[i][j] = 'O';
                }
            }
        }
        
        
        // return board;
    }
}