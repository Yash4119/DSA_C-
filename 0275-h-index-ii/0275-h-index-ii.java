class Solution {
    public int hIndex(int[] citations) {
        int n = citations.length;
        
        if(n==0)return n;
        
//         int arr [] = new int[n+1];
        
//         for(int it:citations){
//             if(it>=n){
//                 arr[n]++;
//             }
//             else{
//                 arr[it]++;
//             }
//         }
        
       for(int i=0;i<n;i++){
           if(citations[i] >= n-i)return n-i;
       }
        
        return 0;
    }
}