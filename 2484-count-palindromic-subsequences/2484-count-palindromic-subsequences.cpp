class Solution {
public:
    int countPalindromes(string s) {
        const int mod = 1'000'000'007;
        int n = s.size();
        long ans = 0;
        
        for(int i=0;i<=9;i++){
            for(int j=0;j<=9;j++){
                
                vector<int>pattern={i,j,0,j,i};
                vector<long>dp(6);
                dp[5] = 1;
                
                for(int k=0;k<n;k++){
                    for(int m=0;m<5;m++){
                        if(s[k]==pattern[m]+'0' || m==2)dp[m] = (dp[m]+dp[m+1])%mod;
                    }
                }
                ans = (ans+dp[0])%mod;
            }
        }
        return ans;
    }
};