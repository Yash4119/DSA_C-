class Solution {
public:
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        
        vector<vector<pair<int,int>>>rideStartAt(n);
        
        for(auto &ride: rides){
            rideStartAt[ride[0]].push_back({ride[1] , ride[1]-ride[0]+ride[2]});
        }
        
        vector<long long>dp(n+1);
        
        for(int i=n-1;i>=1;i--){
            
            for(auto& [e,d] : rideStartAt[i]){
                dp[i] = max(dp[i], dp[e]+d);
            }
            dp[i] = max(dp[i],dp[i+1]);
        }
        
        return  dp[1];
    }
};