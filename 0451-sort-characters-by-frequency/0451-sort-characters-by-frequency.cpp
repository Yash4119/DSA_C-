class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        s="";
        for(auto it:mp){
            int freq=INT_MIN;
            char ch;
            for(auto it2:mp){
                if(it2.second > freq){
                    freq = it2.second;
                    ch=it2.first;
                }
            }
            mp[ch]=0;
            for(int i=0;i<freq;i++){
                s += ch;
            }
        }
        return s;
    }
};