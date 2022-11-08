class Solution {
    public int hIndex(int[] citations) {
        int n = citations.length;
        int arr [] = new int[n+1];
        
        for(int it:citations){
            if(it > n){
                arr[n]++;
            }
            else{
                arr[it]++;
            }
        }
        
//         Coutning the total number of citations 
        int total = 0;
        for(int i = n;i>=0;i--){
            total += arr[i];
            if(total >= i){
                return i;
            }
        }
        
        return n;
    }
}