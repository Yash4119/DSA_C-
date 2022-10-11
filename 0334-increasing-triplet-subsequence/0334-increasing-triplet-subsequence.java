class Solution {
    public boolean increasingTriplet(int[] nums) {
        int s = Integer.MAX_VALUE;
        int e = Integer.MAX_VALUE;
        
        for(int num : nums){
            if(num <= s){
                s=num;
            }
            else if(num <= e){
                e = num;
            }
            else {
                return true;
            }
        }
        
        return false;
    }
}