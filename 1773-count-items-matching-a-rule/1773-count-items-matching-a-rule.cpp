class Solution {
public:
    int countMatches(vector<vector<string>>& items, string key, string value) {
        
        unordered_map<string,int>mp = {{"type",0},{"color",1},{"name",2}};
        int n = items.size();
        int count=0;
        
        for(int i=0;i<n;i++){
            if(items[i][mp[key]] == value){
                count++;
            }
        }
        
        return count;
    }
};