class Solution {
public:
    
    void helper(vector<vector<int>>&grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>= grid[0].size() || grid[i][j]==0 ||
           grid[i][j]==-1){
            return;
        }
        
        // cout<<i<<" "<<j<<endl;
        
        grid[i][j] = -1;
        
        helper(grid,i+1,j);
        helper(grid,i-1,j);
        helper(grid,i,j+1);
        helper(grid,i,j-1);
        
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        // cout<<m<<" "<<n<<endl;
        
        vector<vector<int>>dp(m,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            if(grid[0][i]==1){
                helper(grid,0,i);
            }
            if(grid[m-1][i]==1){
                helper(grid,m-1,i);
            }
        }
        
        for(int i=0;i<m;i++){
            if(grid[i][0]==1){
                helper(grid,i,0);
            }
            if(grid[i][n-1]==1){
                helper(grid,i,n-1);
            }
        }
        
        int maxi = 0;
        
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=n-1;j++){
                if(grid[i][j] == 1)maxi++;
            }
        }
        
        return maxi;
    }
};










