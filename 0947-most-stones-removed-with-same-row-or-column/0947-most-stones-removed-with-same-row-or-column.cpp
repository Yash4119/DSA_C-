class DSU{
public:
    unordered_map<int,int>freq;
    int islands=0;
    
    int find_parent(int x){
        if(freq.find(x) == freq.end()){
            freq[x] = x;
            islands++;
        }
        if(freq[x] != x){
            freq[x] = find_parent(freq[x]);
        }
        
        return freq[x];
    }
    
    void union_dsu(int x,int y){
        x = find_parent(x);
        y = find_parent(y);
        
        if(x!=y){
            freq[x] = y;
            islands--;
        }
    }
    
};

class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        
        DSU* obj = new DSU();
        
        for(int i=0;i<stones.size();i++){
            obj->union_dsu(stones[i][0],~stones[i][1]);
        }
        
        return stones.size()-obj->islands;
    }
};














