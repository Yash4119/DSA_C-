class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            bool flag=false;
            while(i+1 < nums.size() && nums[i] == nums[i+1]){
                nums[i] = -101;
                i++;
                flag=true;
            }
            if(flag){
                i-=1;
            }
        }
        
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[j]!=-101){
                nums[i] = nums[j];
                i++;
            }
            j++;
        }
        
        return i;
    }
};