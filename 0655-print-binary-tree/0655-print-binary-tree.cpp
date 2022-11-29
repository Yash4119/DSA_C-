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
    vector<vector<string>> printTree(TreeNode* root) {
        int h = get_height(root), w = get_width(root);
        vector<vector<string>>ans(h,vector<string>(w,""));
        
        helper(ans,root,0,0,w-1);
        return ans;
    }
    
    int get_height(TreeNode* root){
        if(!root){
            return 0;
        }
        
        int lh = get_height(root->left);
        int rh = get_height(root->right);
        
        return 1 + max(lh,rh);
    }
    
    int get_width(TreeNode* root){
        if(!root){
            return 0;
        }
        
        return max(get_width(root->left),get_width(root->right))*2 + 1;
    }
    
    void helper(vector<vector<string>>&ans, TreeNode* root, int level, int left, int right){
        if(!root){
            return ;
        }
        
        int mid = left + (right-left)/2;
        ans[level][mid] = to_string(root->val);
        
        helper(ans,root->left, level+1,left,mid-1);
        helper(ans,root->right, level+1, mid+1, right);
    }
    
};