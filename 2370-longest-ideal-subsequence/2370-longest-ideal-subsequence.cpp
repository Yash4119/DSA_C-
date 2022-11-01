class Solution {
public:
    
    int helper(string& s,int prev, int ind,int& k,vector<vector<int>>&dp){
        if(ind >= s.size())return 0;
        
        if(dp[ind][prev] != -1) return dp[ind][prev];
        
        int lh =0,rh=0;
        
        if(prev==0 || abs(s[ind]-prev) <= k){
            lh = 1 + helper(s,s[ind],ind+1,k,dp);
        }
        rh = helper(s,prev,ind+1,k,dp);
        
        return dp[ind][prev] = max(lh,rh);
    }
    
    int longestIdealString(string s, int k) {
        vector<vector<int>>dp(s.size()+1, vector<int>(150,-1));
        return helper(s,0,0,k,dp);
    }
    
//     int longestIdealString(string s, int k) {
//         vector<int>dp(s.size(),-1);
        
//         for(int i=0;i<s.size();i++){
//             for(int j=0;)
//         }
        
//     }
};