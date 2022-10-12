class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        // sort(nums.begin(),nums.end());
        
        set<int>st(nums.begin(),nums.end());
        
        int i=0;
        for(auto it:st){
            nums[i] = it;
            i++;
        }
        
        int ans = 1;
        int curr=1;
        int n = nums.size();
        
        for(int i=0;i<n-1;i++){
            if(nums[i]+1 == nums[i+1]){
                // cout<<i<<endl;
                curr++;
            }
            else{
                ans = max(ans,curr);
                curr=1;
            }
        }
        
        ans = max(ans,curr);
        
        return ans;
    }
};