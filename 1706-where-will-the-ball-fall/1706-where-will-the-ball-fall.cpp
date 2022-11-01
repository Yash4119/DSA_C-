class Solution {
public:
    
    bool isValid(int m, int n, int row, int col){
        if(row >= m || col >= n || row < 0 || col <0){
            return false;
        }
        
        return true;
    }
    
    int helper(vector<vector<int>>&grid, int row, int col){
        if(row == grid.size()){
            return col;
        }
        
        int m = grid.size();
        int n = grid[0].size();
        
        if(grid[row][col] == 1){
            if(isValid(m,n,row,col+1) && grid[row][col+1] == 1){
                return helper(grid,row+1,col+1);
            }
        }
        else{
            if(isValid(m,n,row,col-1) && grid[row][col-1] == -1){
                return helper(grid,row+1,col-1);
            }
        }
        
        return -1;
    }
    
    vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<int>ans(n,0);
        
        for(int i=0;i<n;i++){
            ans[i] = helper(grid,0,i);
        }
        
        return ans;
    }
};