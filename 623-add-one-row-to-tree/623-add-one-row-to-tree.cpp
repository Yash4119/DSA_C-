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
    
    TreeNode* inorder(TreeNode* root, int val, int depth){
        // cout<<root->val<<endl;
        
        if(root==NULL)return NULL;
        
        if(depth==1){
            
            TreeNode* temp1 = new TreeNode(val);
            TreeNode* temp2 = new TreeNode(val);
            temp1->left = root->left;
            temp2->right = root->right;

            root->left = temp1;
            root->right = temp2;
            
            return root;
        }
        
        root->left = inorder(root->left,val,depth-1);
        root->right = inorder(root->right,val,depth-1);
        
        return root;
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(depth==1){
            TreeNode* temp1 = new TreeNode(val);

            temp1->left = root;
            
            return temp1;
        }
        
        return inorder(root,val,depth-1);
        
    }
};