class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
//         Prefix sum Along with DP
//         that store the number of consecutive elemnts lesser than or greater then that particular element
        int n = nums.size();
        vector<int>dec(n,1);
        vector<int>inc(n,1);
        
        for(int i=1;i<n;i++){
            if(nums[i] <= nums[i-1]){
                dec[i] = 1 + dec[i-1];
            }
        }
        
        for(int i=n-2;i>=0;i--){
            if(nums[i] <= nums[i+1]){
                inc[i] = 1 + inc[i+1];
            }
        }
        
        vector<int>ans;
        for(int i=k;i<n-k;i++){
            if(dec[i-1] >= k && inc[i+1] >= k){
                ans.push_back(i);
            }
        }
    return ans;        
    }
};

