class DSU{
  vector<int>parent,rank;
  int n;
public:
    
    DSU(int n){
        this->n = n;
        parent.resize(n);
        rank.resize(n);
        make_set();
    }
    
    void make_set(){
        for(int i=0;i<n;i++){
            parent[i] = i;
            rank[i] = 0;
        }
    }
    
    int find_parent(int node){
        if(parent[node] != node){
            parent[node] = find_parent(parent[node]);
        }
        
        return parent[node];
    }
    
    void union_set(int u, int v){
        int pu = find_parent(u);
        int pv = find_parent(v);
        
        if(pu==pv)return;
        
        if(rank[pu] > rank[pv]){
            parent[pv] = pu;
        }
        else if(rank[pu] < rank[pv]){
            parent[pu] = pv;
        }
        else{
            parent[pu] = pv;
            rank[pv] += 1;
        }
    }
};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        DSU* obj = new DSU(isConnected.size());
        
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[i].size();j++){
                if(i!=j && isConnected[i][j]==1){
                    obj->union_set(i,j);
                }
            }
        }
        
        unordered_set<int>st;
        
        for(int i=0;i<isConnected.size();i++){
            st.insert(obj->find_parent(i));
        }
        
        return st.size();
    }
};