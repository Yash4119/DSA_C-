class Solution {
    public int longestConsecutive(int[] nums) {
        int n = nums.length;
        
        if(n==0)return 0;
        
        SortedSet<Integer>st = new TreeSet<>();
        
        for(int it:nums){
            st.add(it);
        }
        int [] arr = new int[st.size()];
        int j=0;
        for(int it:st){
            arr[j] = it;
            // System.out.println(it);
            j++;
        }
        
        // Arrays.sort(arr);
        
        int len=1;
        int maxi=1;
        for(int i=1;i<arr.length;i++){
            if(arr[i] == (arr[i-1]+1)){
                len++;
            }
            else{
                maxi = Math.max(maxi,len);
                len=1;
            }
        }
        
        maxi = Math.max(maxi,len);
        return maxi;
    }
}