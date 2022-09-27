class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_avg = INT_MIN;
        int sum = 0;
        
        for(int i=0;i<k-1;i++){
            sum += nums[i];
        }
        
        for(int i=k-1;i<nums.size();i++){
            
            sum += nums[i];
            double avg = (double)sum/k;
            if(avg > max_avg){
                max_avg = avg;
            }
            sum -= nums[i-k+1];
        }
        
        return max_avg;
    }
};