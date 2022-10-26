class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int win_start = 0;
        
        if(s.size() < 10){
            return {};
        }
        
        unordered_map<string,int>mp;
        
        while(win_start+10 <= s.size()){
            string window = s.substr(win_start,10);
            mp[window]++;
            // cout<<window<<" "<<mp[window]<<" "<<win_start<<endl;
            win_start++;
        }
        
        vector<string>ans;
        
        for(auto it:mp){
            if(it.second > 1){
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};