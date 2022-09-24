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
    
    vector<TreeNode*> gen(int from, int to){
        vector<TreeNode*>ret;
        
        if(to - from < 0)ret.push_back(0);
        if(to == from)ret.push_back(new TreeNode(from));
        if(to-from > 0){
            
            for(int i=from;i<=to;i++){
                
                vector<TreeNode*> l = gen(from,i-1);
                vector<TreeNode*> r = gen(i+1,to);
                
                for(int j=0;j<l.size();j++){
                    for(int k=0;k<r.size();k++){
                        TreeNode* temp = new TreeNode(i);
                        temp->left = l[j];
                        temp->right = r[k];
                        ret.push_back(temp);
                    }
                }
            }
            
        }
        return ret;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        return gen(1,n);
    }
};