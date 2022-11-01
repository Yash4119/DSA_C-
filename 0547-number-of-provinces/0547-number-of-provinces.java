public class DSU{
    int [] parent;
    int [] rank;
    int n;
    
    DSU(int n){
        this.n = n;
        parent = new int[n];
        rank = new int[n];
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
    
    void union_set(int u,int v){
        int pu = find_parent(u);
        int pv = find_parent(v);
        
        if(pu==pv)return;
        
        if(rank[pu] > rank[pv]){
            parent[pv] = pu;
        }
        else if(rank[pv] > rank[pu]){
            parent[pu] = pv;
        }
        else{
            parent[pu] = pv;
            rank[pv] += 1;
        }
    }
}

class Solution {
    public int findCircleNum(int[][] isConnected) {
        
        DSU obj = new DSU(isConnected.length);
        
        for(int i=0;i<isConnected.length;i++){
            for(int j=i+1;j<isConnected[i].length;j++){
                if(isConnected[i][j] == 1){
                    obj.union_set(i,j);
                }
            }
        }
        
        HashMap<Integer,Integer> mp = new HashMap<>();
        
        for(int i=0;i<isConnected.length;i++){
            mp.put(obj.find_parent(i),1);
        }
        
        return mp.size();
    }
}