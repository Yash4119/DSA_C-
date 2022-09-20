class Solution {
    public int findLength(int[] a, int[] b) {
        if(a==null || b==null){
            return 0;
        }
        int m = a.length;
        int n = b.length;
        int max=0;
        
        int [][] dp = new int[m+1][n+1];
        
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
                else{
                    if(a[i-1]==b[j-1]){
                        dp[i][j] = 1 + dp[i-1][j-1];
                        max = Math.max(max,dp[i][j]);
                    }
                }
            }
        }
        return max;
    }
}