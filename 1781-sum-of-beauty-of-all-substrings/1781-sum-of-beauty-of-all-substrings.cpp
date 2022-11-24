class Solution {
public:
    int beautySum(string s) {
        
        int beauty=0;
        
        for(int i=0;i<s.size();i++){
            unordered_map<char,int>mp;
            
            for(int j=i;j<s.size();j++){
                int maxi=0;
                 int mini=500;
                mp[s[j]]++;
                for(auto it:mp){
                    maxi = max(maxi,it.second);
                    mini = min(mini,it.second);
                    // cout<<maxi<<" "<<mini<<endl;
                }

                beauty += (maxi-mini);
            }
            
            
        }
        
        return beauty;
    }
};