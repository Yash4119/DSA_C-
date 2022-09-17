class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        
        for(int i=0;i<n;i++){
            int ct=0;
            for(int j=0;j<n;j++){
                if(j==i)continue;
                if(nums[j]<nums[i])ct++;
            }
            ans[i] = ct;
        }
        
        return ans;
    }
};