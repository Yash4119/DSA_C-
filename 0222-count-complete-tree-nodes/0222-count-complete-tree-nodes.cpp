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
class Solution {
public:
    int countNodes(TreeNode* root) {
        int count=0;
        if(root==NULL)return 0;
        queue<TreeNode*>st;
        
        st.push(root);
        
        while(!st.empty()){
            int n = st.size();
            count+=n;
            for(int i=0;i<n;i++){
                TreeNode* temp = st.front();
                st.pop();
                if(temp->left)st.push(temp->left);
                if(temp->right)st.push(temp->right);
            }
            
        }
        
        return count;
    }
};