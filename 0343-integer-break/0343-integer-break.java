class Solution {
    public int integerBreak(int n) {
        int [] maxArr = new int[n+1];
        
        maxArr[0] = maxArr[1] = 0;
        maxArr[2] = 1;
        
        for(int i=3;i<=n;i++){
            for(int j=1;j<i;j++){
                maxArr[i] = Math.max(maxArr[i], Math.max(j*(i-j), j* maxArr[i-j]));
            }
        }
        
        return maxArr[n];
    }
}