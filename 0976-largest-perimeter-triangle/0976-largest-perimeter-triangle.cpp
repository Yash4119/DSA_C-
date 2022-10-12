class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i=nums.size()-1;i>=2;i--){
            int s1,s2,s3;
            s1 = nums[i]+nums[i-1];
            s2 = nums[i-1]+nums[i-2];
            s3 = nums[i]+nums[i-2];
            
            if(s1>nums[i-2] and s2>nums[i] and s3>nums[i-1]){
                return nums[i]+nums[i-1]+nums[i-2];
            }
        }
        
        return 0;
    }
};