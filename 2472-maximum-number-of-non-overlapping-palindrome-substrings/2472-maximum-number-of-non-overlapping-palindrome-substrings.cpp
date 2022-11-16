class Solution {
public:
    
    int maxPalindromes(string s, int k) {
        vector<vector<int>>intervals;
        int n = s.size();
        
        for(int center = 0;center < 2*n; center++){
            int left = center/2;
            int right = left + (center % 2);
            
            while(left >= 0 && right < n && s[left]==s[right]){
                if(right-left+1 >= k){
                    intervals.push_back({left,right+1});
                    break;
                }
                
                left--;
                right++;
            }
            
        }
        
        int last = INT_MIN,ans=0;
        
        for(vector<int>&v : intervals){
            if(v[0] >= last){
                last = v[1];
                ans++;
            }
            else{
                if(v[1]<last){
                    last = v[1];
                }
            }
        }
        
        return ans;
    }
};