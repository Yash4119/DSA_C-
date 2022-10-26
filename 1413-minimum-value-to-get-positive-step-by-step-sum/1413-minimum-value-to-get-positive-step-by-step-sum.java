class Solution {
    public int minStartValue(int[] nums) {
        
        int mini = 0;
        int n = nums.length;
        int cur=0;
        
        for(int i=0;i<n;i++){
            mini = Math.min(mini,cur+=nums[i]);
        }
        
        return (Math.abs(mini-1));
    }
}