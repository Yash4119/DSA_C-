class Solution {
    public List<Integer> majorityElement(int[] nums) {
        Arrays.sort(nums);
        
        List<Integer> ans = new ArrayList<>();
        
        int i=0,freq=1,n=nums.length/3;
        
        while(i < nums.length){
            while(i+1 < nums.length && nums[i]==nums[i+1]){
                freq++;
                i++;
            }
            if(freq > n){
                ans.add(nums[i]);
            }
            
            freq=1;
            i++;
        }
        
        return ans;
    }
}