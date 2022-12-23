//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int profit=0;
    long long memoi(vector<long long>&prices, vector<vector<long long>>&dp ,int ind, int canBuy){
        if(ind >= prices.size()){
            return 0;
        }

        if(dp[ind][canBuy]!=-1){
            return dp[ind][canBuy];
        }

        if(canBuy){
            profit = max(memoi(prices,dp,ind+1,1), memoi(prices,dp,ind+1,0) - prices[ind]);
        }
        else{
            profit = max(memoi(prices,dp,ind+1,0), memoi(prices,dp,ind+2,1) + prices[ind]);
        }

        return dp[ind][canBuy] = profit;
    }
    
    long long maximumProfit(vector<long long>&prices, int n) {
        vector<vector<long long>>dp(n,vector<long long>(2,-1));
        
        return memoi(prices,dp,0,1);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> prices;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            prices.push_back(x);
        }
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends