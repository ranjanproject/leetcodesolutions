/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root){
            return root;
        }
        else{
            TreeNode *temp1,*temp2;
            
            temp1 = invertTree(root->left);
            temp2  = invertTree(root->right);
            
            root->left = temp2;
            root->right = temp1;
            return root;
            
        }
        
    }
};