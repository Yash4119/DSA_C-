class Solution {
public:
    
//     void bfs(vector<vector<int>>&mat, vector<int>&vis, int ind, int n, int& mini){
//         if(ind==n){
//             return;
//         }
//         if(vis[ind]==1){
//             return;
//         }
        
//         vis[ind] = 1;
//         int cost=INT_MAX;
//         for(int i=1;i<=n;i++){
//             if(mat[ind][i]!=0){
//                 mini = min(mat[ind][i],mini);
//                 bfs(mat,vis,i,n,mini);
//             }
//         }
        
//         vis[ind=0];
//     }
    
    inline int dfs(unordered_map<int,unordered_map<int,int>>&mp, unordered_set<int>&st,int n){
          int res = INT_MAX;
            st.insert(n);
            
            for (auto[adj, scr] : mp[n])
            {
                if (!st.count(adj))
                    res = min(res, dfs(mp,st,adj));
                res = min(res, scr);
            }
            
            return res;
    }
    
    int minScore(int n, vector<vector<int>>& roads) {
        
        unordered_map<int,unordered_map<int,int>>mp;
        
        for(auto r:roads){
            mp[r[0]][r[1]] = mp[r[1]][r[0]] = r[2];
        }
        
        unordered_set<int>st;
        int mini = INT_MAX;
        mini = dfs(mp,st,n);
        
        return mini;
        
    }
};