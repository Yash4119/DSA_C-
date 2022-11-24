class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mp;
        int maxi = 0;
        
        for(auto it:tasks){
            mp[it]++;
            
            maxi = max(maxi,mp[it]);
        }
        
        int time = (maxi-1)*(n+1);
        for(auto it : mp){
            if(it.second==maxi)time++;
        }
        
        return max((int)tasks.size(),time);
    }
};