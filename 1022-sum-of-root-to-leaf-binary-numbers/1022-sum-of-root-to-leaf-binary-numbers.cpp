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
    
        int ans=0;
    int calc_binary(string s){
        int ans = 0;
        int ind=1;
        
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                ans = ans + ind;
            }
            ind *= 2;
        }
        // cout<<s<<" "<<ans<<endl;
        return ans;
    }
    
    void inorder(TreeNode* root, string s,int& ans){
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            s+=(root->val+'0');
            ans += calc_binary(s);
            // cout<<s<<endl;
            return;
        }
        s+=(root->val+'0');
        inorder(root->left,s,ans);
        s.pop_back();
        s+=(root->val+'0');
        inorder(root->right,s,ans);
        
    }
    
    int sumRootToLeaf(TreeNode* root) {
        inorder(root,"",ans);
        
        return ans;
    }
};