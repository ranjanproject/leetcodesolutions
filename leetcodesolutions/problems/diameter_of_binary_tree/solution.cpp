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
    int ans;
    int len(TreeNode* root){
        if(!root){
            return 0;
        }
        else{
            int l,r;
            l = len(root->left);
            r = len(root->right);
            ans = max(ans,l+r+1);
            return 1+ max(l,r);
        }
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 1;
        len(root);
        return ans-1;
    }
};