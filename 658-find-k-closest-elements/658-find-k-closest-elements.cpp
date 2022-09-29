class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int left=0;
        int right = arr.size()-k;
        
//         as we need a window of k elements hence we take right as Arr.Size()-K
//         now go on checking the window becoz as we know that the array is sprted hence we require just a single starting point from where we can take the 1st K elements
        
        while(left < right){
            int mid = (left+right)/2;
            
            if(x-arr[mid] > arr[mid+k]-x){
                left = mid+1;
//              as the diff of the left most element is not the minimum so in order to find the closest element we move the window towards the left
            }
            else{
                right = mid;
            }
        }
        
        vector<int>ans(arr.begin()+left, arr.begin()+left+k);
//         As we have got the optimal starting point so we now select the first K elements from the starting point as our answer;
        return ans;
    }
};