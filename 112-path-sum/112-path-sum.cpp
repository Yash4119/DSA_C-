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
    
    bool inorder(TreeNode* root, int sum, int tar){
        if(root == NULL){
            return false;
        }
        if(root->left==NULL and root->right==NULL and root->val + sum == tar){
            return true;
        }
        
        bool lh = inorder(root->left,sum+root->val,tar);
        bool rh = inorder(root->right,sum+root->val,tar);
        
        return lh||rh;
    } 
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        return inorder(root,0,targetSum);
    }
};