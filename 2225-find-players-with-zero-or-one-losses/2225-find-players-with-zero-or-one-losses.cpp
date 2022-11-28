class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& mat) {
        
        int n = mat.size();
        set<int>wins;
        map<int,int>loses;
        
        for(int i=0;i<n;i++){
            wins.insert(mat[i][0]);
            loses[mat[i][1]]++;
        }
        
        vector<vector<int>>ans(2);
        
        for(auto it:wins){
            if(loses.find(it)==loses.end()){
                ans[0].push_back(it);
            }
        }
        for(auto it:loses){
            if(it.second == 1){
                ans[1].push_back(it.first);
            }
        }
        
        return ans;
    }
};