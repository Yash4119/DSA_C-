class Solution {
public:
    
    bool check(vector<vector<char>>board,int i,int j,int val){
        
        for(int ind = 0;ind<9;ind++){
            
            if(ind != j and board[i][ind]==val)return false;
            
            if(ind != i and board[ind][j]==val)return false;
            
            int r = 3*(i/3) + (ind/3);
            int c = 3*(j/3) + (ind%3);
            if(r!=i and c!=j and board[r][c]==val){
                return false;
            }
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0;i<9;i++){
            for( int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    if(!check(board,i,j,board[i][j])){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};