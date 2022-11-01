class Solution {
    public int lengthOfLIS(int[] nums) {
        int n = nums.length;
        
        List<Integer> dp = new ArrayList<Integer>(Arrays.asList(new Integer[n]));
        Collections.fill(dp,1);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i] > nums[j] && dp.get(i) < dp.get(j)+1){
                    dp.set(i,dp.get(j)+1);
                }
            }
        }
        int maxi = 1;
        
        for(int i=0;i<n;i++){
            maxi = Math.max(maxi,dp.get(i));
        }
        
        return maxi;
    }
}