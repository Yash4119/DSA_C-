class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        vector<unordered_map<long long,int>>arr(n);
        int ans=0;
        
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                
                long long diff = (long long)nums[i] - nums[j];
                int cnt = arr[j].count(diff)? arr[j][diff]:0;
                arr[i][diff] += cnt+1;
                ans += cnt;
                
            }
        }
        return ans;
    }
};