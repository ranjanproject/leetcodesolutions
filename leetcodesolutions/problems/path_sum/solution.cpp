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
    bool PathSum(TreeNode* root, int sum) {
        if(!root)return false;
        if(root->left==NULL && root->right==NULL && sum-root->val==0){
            return true;
        }
        else{
            sum = sum - (root->val);
            return (PathSum(root->left,sum)||PathSum(root->right,sum));
        }
    }
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)return false;
        else return PathSum(root,sum);
    }
};