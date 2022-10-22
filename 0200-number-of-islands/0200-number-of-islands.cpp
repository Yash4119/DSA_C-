class Solution {
public:
    
    void dfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int i, int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()){
            return;
        }
        else if(vis[i][j]==1 || grid[i][j] == '0')return;
        
        // cout<<i<<" "<<j<<endl;
        
        vis[i][j] = 1;
        dfs(grid,vis,i+1,j);
        dfs(grid,vis,i-1,j);
        dfs(grid,vis,i,j+1);
        dfs(grid,vis,i,j-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),-1));
        int count = 0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(vis[i][j] == -1 and grid[i][j] == '1'){
                    // cout<<i<<" "<<j<<" ";
                    dfs(grid,vis,i,j);
                    count++;
                    // cout<<count<<endl;
                }
            }
        }
        return count;
    }
};