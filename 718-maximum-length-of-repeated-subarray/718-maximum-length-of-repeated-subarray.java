class Solution {
    public int findLength(int[] a, int[] b) {
        if(a==null || b==null){
            return 0;
        }
        int m = a.length;
        int n = b.length;
        int max=0;
        
        int [] dp = new int[n+1];
        
        for(int i=0;i<=m;i++){
            int [] temp = new int[n+1];
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    temp[j]=0;
                }
                else{
                    if(a[i-1]==b[j-1]){
                        temp[j] = 1 + dp[j-1];
                        max = Math.max(max,temp[j]);
                    }
                }
            }
            dp = temp;
        }
        return max;
    }
}