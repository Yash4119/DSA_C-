class Solution {
public:
    int trap(vector<int>& height) {
        int hl=0,hr=0;
        int ml=0,mr=0;
        int left=0,right = height.size()-1;
        int water=0;
        
        while(left<=right){
            if(height[left] <= height[right]){
                if(height[left] >= ml){
                    ml = height[left++];
                }
                else{
                    water += ml-height[left];
                    left++;
                }
            }
            else{
                if(height[right] > mr){
                    mr = height[right--];
                }
                else{
                    water += mr-height[right];
                    right--;
                }
            }
        }
        
        return water;
    }
};