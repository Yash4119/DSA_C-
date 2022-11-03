class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        
        if(n==1)return 0;
        for(int i=n-2;i>=0;i--){
            suffix[i] = suffix[i+1] + nums[i];
        }
        
        if(n>=2 && suffix[1]==0)return 0;
        
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] + nums[i];
            if(suffix[i]==prefix[i])return i;
        }
        
        if(n>=2 && prefix[n-2]==0)return n-1;
        
        
        return -1;
    }
};