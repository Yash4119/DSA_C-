class Solution {
    
    int uf[26];
    int find_uf(int x){
        return uf[x]==x ? x : (uf[x] = find_uf(uf[x]));
    }
    
public:
    bool equationsPossible(vector<string>& equations) {
        
        for(int i=0;i<26;i++)uf[i]=i;
        
        for(auto it : equations){
            if(it[1] == '='){
                uf[find_uf(it[0]-'a')] = find_uf(it[3]-'a');
            }
        }
        for(auto it : equations){
            if(it[1] == '!' && find_uf(it[0]-'a') == find_uf(it[3]-'a')) return false;
        }
        
        return true;
    }
};