class Solution {
public:
    int longestContinuousSubstring(string s) {
        
        int maxi = 0;
        int size=1;
        int last=0;
        
        for(int i=1;i<s.size();i++){
            
            if(s[i] == (s[i-1]+1)){
                size++;
            }
            else{
                maxi = max(maxi,size);
                size=1;
            }
        }
        
        maxi = max(maxi,size);
        
        return maxi;
    }
};