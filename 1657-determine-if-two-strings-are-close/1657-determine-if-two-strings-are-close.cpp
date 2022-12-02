class Solution {
public:
    bool closeStrings(string w1, string w2) {
        if(w1.size() != w2.size()){
            return false;
        }
        
        unordered_map<char,int>mp1,mp2;
        
        for(int i=0;i<w1.size();i++){
            mp1[w1[i]]++;
            mp2[w2[i]]++;
        }
        
        for(auto it:mp1){
            if(mp2.find(it.first)==mp2.end())return false;
        }
        
        for(auto it:mp1){
            bool fl = false;
            for(auto it2:mp2){
                if(it.second == it2.second){
                    fl = true;
                    mp2[it2.first] = -1;
                    // cout<<it.first<<" "<<it.second<<" "<<it2.first<<" "<<it2.second<<endl;
                    break;
                }
            }
            if(!fl){
                return false;
            }
        }
        
        return true;
    }
};