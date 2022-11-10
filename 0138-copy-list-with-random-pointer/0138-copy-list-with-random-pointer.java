/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    public Node copyRandomList(Node head) {
        HashMap<Node,Node> mp = new HashMap<>();
        Node ptr = head;
        
        while(ptr!=null){
            mp.put(ptr,new Node(ptr.val));
            ptr = ptr.next;
        }
        
        ptr=head;
        while(ptr!=null){
            mp.get(ptr).next = mp.get(ptr.next);
            mp.get(ptr).random = mp.get(ptr.random);
            ptr = ptr.next;
        }
        
        return mp.get(head);
    }
}