class Solution {
public:
    int jobScheduling(vector<int>& st, vector<int>& et, vector<int>& profit) {
        int n = st.size();
        vector<vector<int>> jobs;
        
        for(int i=0;i<n;i++){
            jobs.push_back({et[i],st[i],profit[i]});
        }
        sort(jobs.begin(),jobs.end());
        
        map<int,int> dp{{0,0}};
        
        for(auto &it:jobs){
            int curr_profit = prev(dp.upper_bound(it[1]))->second + it[2];
            
            if(curr_profit > dp.rbegin()->second){
                dp[it[0]] = curr_profit;
            }
        }
        
        return dp.rbegin()->second;
    }
};