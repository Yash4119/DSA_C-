class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        
        int steps=0;
        
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i]) == mp.end()){
                steps++;
            }
            else{
                
                if(mp[s[i]] <= 0){
                    steps++;
                }
                else
                mp[s[i]]--;
            }
        }
        
        return steps;
    }
};