/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class BST_Iterator{
private:
    stack<TreeNode*>st;
    bool reverse = false;
public:
    
    BST_Iterator(TreeNode* root, bool reverse){
        st.push(root);
        this->reverse = reverse;
        if(!reverse){
            pushAll(root->left);
        }
        else{
            pushAll(root->right);
        }
    }
    
    int next(){
        TreeNode* node = st.top();
        st.pop();
        int value = node->val;
 
        if(!reverse){
            pushAll(node->right);
        }
        else{
            pushAll(node->left);
        }
        
        return value;
    }
    
    bool hasNext(){
        return !st.empty();
    }
    
private:
    void pushAll(TreeNode* temp){
        
        while(temp != NULL){
            if(!reverse){
                st.push(temp);
                temp = temp->left;
            }
            else{
                st.push(temp);
                temp = temp->right;
            }
        }
        
    }
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        
        if(root==NULL){
            return false;
        }
        
        BST_Iterator* l = new BST_Iterator(root,false);
        BST_Iterator* r = new BST_Iterator(root,true);
        
        int i = l->next();
        int j = r->next();
        
        while(i<j){
            if((i+j)==k){
                return true;
            }
            else if((i+j) < k){
                i = l->next();
            }
            else{
                j = r->next();
            }
        }
        return false;
    }
};