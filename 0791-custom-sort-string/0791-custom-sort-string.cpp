class Solution {
public:
    
    string customSortString(string o, string s) {
        
        string ans="";
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;    
        }
        
        
        for(int i=0;i<o.size();i++){
            for(int j=0;j<mp[o[i]];j++){
                ans += o[i];
            }
            mp[o[i]] = 0;
        }
        
        for(auto it:mp){
            if(it.second>0){
                for(int j=0;j<it.second;j++){
                ans += it.first;
                }
            } 
        }
        
        return ans;
    }
};