/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> neighbors;
    public Node() {
        val = 0;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val) {
        val = _val;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val, ArrayList<Node> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
}
*/

class Solution {
    
    public Node dfs(Node curr, HashMap<Node,Node>mp){
        
        List<Node> neighbor = new ArrayList<>();
        
        Node clone = new Node(curr.val);
        mp.put(curr,clone);
        // Map.Entry<String,String> entry : gfg.entrySet()
        for(Node it : curr.neighbors){
            if(mp.containsKey(it)==true){
                neighbor.add(mp.get(it));
            }
            else{
                neighbor.add(dfs(it,mp));
            }
        }
        
        clone.neighbors = neighbor;
        
        return clone;
    }
    
    public Node cloneGraph(Node node) {
        HashMap<Node,Node>mp = new HashMap<>();
        
        if(node==null){
            return null;
        }
        if(node.neighbors.size() == 0){
            Node clone = new Node(node.val);
            return clone;
        }
        
        return dfs(node,mp);
    }
}