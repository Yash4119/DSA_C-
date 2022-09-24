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
    
    void inorder(TreeNode* root, int target, int curr, vector<int>&temp, vector<vector<int>>&ans){
        if(root==NULL){
            return;
        }
        if(root->left == NULL and root->right==NULL){
            curr += root->val;
            
            if(curr == target){
                temp.push_back(root->val);
                ans.push_back(temp);
                temp.pop_back();
            }
            
            return;
        }
        
        temp.push_back(root->val);
        curr += root->val;
        inorder(root->left,target,curr,temp,ans);
        inorder(root->right,target,curr,temp,ans);
        temp.pop_back();
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>temp;
        
        inorder(root,targetSum,0,temp,ans);
        
            return ans;
    }
};