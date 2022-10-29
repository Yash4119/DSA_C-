class Solution {
    public List<Integer> goodIndices(int[] nums, int k) {
        int n =nums.length;
        
        int [] dec = new int[n];
        int [] inc = new int[n];
        Arrays.fill(dec,1);
        Arrays.fill(inc,1);
        
        for(int i=1;i<n;i++){
            if(nums[i] <= nums[i-1]){
                dec[i] = 1 + dec[i-1];
            }
        }        
        
        for(int i=n-2;i>=0;i--){
            if(nums[i] <= nums[i+1]){
                inc[i] = 1+inc[i+1];
            }
        }
        
        ArrayList<Integer> ans = new ArrayList<>();
        
        for(int i=k;i<n-k;i++){
            if(dec[i-1] >= k && inc[i+1] >= k){
                ans.add(i);
            }
        }
        
        return ans;
    }
}