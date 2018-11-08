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
    void summation(TreeNode* root, int &sm, int v){
        if(root==NULL){
            return;
        }
        else if(root->left==NULL && root->right==NULL){
            sm = sm + v*10 + root->val;
            return;
        }
        else{
            summation(root->left,sm,v*10+root->val);
            summation(root->right,sm,v*10+root->val);
            
        }
    }
    int sumNumbers(TreeNode* root) {
        int sm=0,v=0;
        summation(root,sm,v);
        return sm;
    }
};