class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        vector<long long int>pre(nums.size(),0);
        pre[0] = nums[0];
        
        for(int i=1;i<nums.size();i++){
            pre[i] = pre[i-1] + nums[i];
        }
        
        int n = nums.size();
        int ind=0;
        int mini = INT_MAX;
        
        for(int i=0;i<n;i++){
            int av1 = pre[i]/(i+1);
            int av2 = 0;
            if(i<n-1)av2=(pre[n-1]-pre[i])/(n-i-1);
            
            // cout<<i<<" "<<av1<<" "<<av2<<endl;
            av1 =abs(av1-av2);
            // cout<<av1<<endl;
            if(mini > av1){
                mini = av1;
                ind= i;
            }
        }
        
        return ind;
    }
};