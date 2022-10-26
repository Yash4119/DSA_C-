class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size(),n=matrix[0].size();
        
        if(matrix.empty())return 0;
        
        vector<int>left(n,0),right(n,n),height(n,0);
        
        int max_Area=0;
        
        for(int i=0;i<m;i++){
            int curr_left = 0;
            int curr_right = n;
            
//             Now We will perform operations on left array
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1'){
                    left[j] = max(left[j],curr_left);
                }
                else{
                    left[j] = 0;
                    curr_left = j+1;
                }
            }
            
//             Now We will perform operations on right array
            for(int j=n-1;j>=0;j--){
                if(matrix[i][j]=='1'){
                    right[j] = min(right[j],curr_right);
                }
                else{
                    right[j] = n;
                    curr_right = j;
                }
            }
            
//             Now We will perform operations on height array
            for(int j=0;j<n;j++){
                if(matrix[i][j] == '1'){
                    height[j]++;
                }
                else{
                    height[j] = 0;
                }
            }
            
//             now we will calculate the maximum area
            for(int j=0;j<n;j++){
                max_Area = max(max_Area , ((right[j]-left[j])*height[j]));
            }
        }
        
        return max_Area;
    }
};