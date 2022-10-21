class Solution {
public:
    
    bool binary_search(vector<int>&arr,int target){
        
        int s=0,e=arr.size()-1;
        
        while(s<=e){
            int mid = s + (e-s)/2;
            if(arr[mid]==target)return true;
            else if(arr[mid] > target){
                e--;
            }
            else s++;
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i=0,j=n-1;
        
        while(i<m and j>=0){
            if(matrix[i][j]==target)return true;
            
            if(matrix[i][j]>target){
                j--;
            }
            else i++;
        }
        
        return false;
    }
};