class Solution {
public:
    
    bool solve(vector<vector<char>>&board,vector<vector<bool>>&dp,string word,string& temp,int i,int j,int ind){
        
        if(ind==word.size()){
            // cout<<temp<<endl;
            return true;
        }
        // bool u=false,l=false,d=false,r=false;
        
        if(i<0 or i>=board.size() or j<0 or j>=board[0].size() or board[i][j]!=word[ind] or dp[i][j])
            return false;
        
        dp[i][j] = 1;
        
        int d = solve(board,dp,word,temp,i+1,j,ind+1);
        int u = solve(board,dp,word,temp,i-1,j,ind+1);
        int l = solve(board,dp,word,temp,i,j-1,ind+1);
        int r = solve(board,dp,word,temp,i,j+1,ind+1);
        dp[i][j]=0;
        return u or l or r or d;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        string temp="";
        vector<vector<bool>>dp(board.size()+1,vector<bool>(board[0].size()+1,0));
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    
                    if(solve(board,dp,word,temp,i,j,0))return true;
                    // dp[i][j]=0;
                }
                // temp="";
            }
        }
        return false;
    }
};