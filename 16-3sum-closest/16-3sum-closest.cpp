class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        long long int ans=INT_MAX;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            
            int mid = i+1;
            int end = nums.size()-1;
            while(mid < end){
                int curr_sum = nums[i]+nums[mid]+nums[end];
                
                ans = ((abs(curr_sum-target) < abs(ans-target))? curr_sum:ans);
                
                if(curr_sum < target){
                    mid++;
                }
                else if(curr_sum > target){
                    end--;
                }
                else{
                    break;
                }
            }
            
        }
        
        return ans;
    }
};

































// long long int ans = INT_MAX;
//         int min_def=INT_MAX;
        
//         sort(nums.begin(),nums.end());
        
//         for(int i=0;i<nums.size();i++){
            
//             int mid=i+1;
//             int end = nums.size()-1;
            
//             while(mid < end){
//                 int curr = nums[i]+nums[mid]+nums[end];
                
//                 ans = ((abs(curr-target) < abs(ans-target))? curr: ans);
                
//                 if(curr<target){
//                     mid++;
//                 }
//                 else if(curr > target){
//                     end--;
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//         return ans;