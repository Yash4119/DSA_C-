class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        int i=0;
        for(i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[i]] > 1)break;
        }
        
        return s[i];
    }
};