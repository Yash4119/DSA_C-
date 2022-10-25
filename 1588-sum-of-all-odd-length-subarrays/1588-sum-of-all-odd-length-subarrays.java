class Solution {
    public int sumOddLengthSubarrays(int[] arr) {
        int sum=0,n=arr.length;
        
        for(int i=0;i<n;i++){
            int contri = (int)Math.ceil(((i+1)*(n-i))/2.0);
            sum += (contri*arr[i]);
        }
        
        return sum;
    }
}