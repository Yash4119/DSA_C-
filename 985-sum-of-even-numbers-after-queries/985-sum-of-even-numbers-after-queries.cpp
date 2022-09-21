class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int even_sum = 0;
        
        for(int i=0;i<nums.size();i++){
            if(!(nums[i]&1)){
                even_sum += nums[i];
            }
        }
        
        // if(even_sum==0){
        //     return {0};
        // }
        
        vector<int>ans(queries.size(),0);
        
        for(int i=0;i<queries.size();i++){
            int val = queries[i][0];
            int ind = queries[i][1];
            
            
            
            if(nums[ind]%2==0 and (nums[ind]+val)%2==0){
                even_sum += val;
            }
            else if(nums[ind]%2!=0 and (nums[ind]+val)%2==0){
                even_sum += (nums[ind]+val);
            }
            else if(nums[ind]%2==0){
                
                even_sum -= nums[ind];
                // cout<<ind<<" "<<val<<" "<<even_sum<<endl;
            }
            
            nums[ind] += val;
            
            // if(even_sum>=0)ans[i] = even_sum;
            ans[i] = even_sum;
        }
        
        // if(ans.size()==0){
        //     ans.push_back(0);
        // }
        
        return ans;
    }
};