class Solution {
    
    public Boolean isValid(int m,int n, int r, int c){
        if(r < 0 || c< 0 || r >= m || c >= n){
            return false;
        }
        
        return true;
    }
    
    public int helper(int [][] grid, int row, int col){
        if(row == grid.length){
            return col;
        }
        
        int m = grid.length;
        int n = grid[0].length;
        
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
    
    public int[] findBall(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        
        int [] ans = new int[n];
        
        for(int i=0;i<n;i++){
            ans[i] = helper(grid,0,i);
        }
        
        return ans;
    }
}