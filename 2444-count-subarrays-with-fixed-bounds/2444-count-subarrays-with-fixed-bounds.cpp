class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count=0;
        bool minF=false,maxF=false;
        int start=0,minS=0,maxS=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxK || nums[i]<minK){
                minF = maxF = false;
                start = i+1;
            }
            if(nums[i]==minK){
                minF=true;
                minS=i;
            }
            if(nums[i]==maxK){
                maxF = true;
                maxS = i;
            }
            
            if(minF && maxF){
                count += (min(minS,maxS) - start + 1);
            }
        }
        
        return count;
    }
};