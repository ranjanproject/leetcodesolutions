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
    int count = 0;

    void preorderTraversal(TreeNode* root, int mx){
        if(root == NULL)return;

        if(root->val >= mx){
            count++;
            mx = root->val;
        }
        preorderTraversal(root->left, mx);
        preorderTraversal(root->right, mx);

    }
    int goodNodes(TreeNode* root) {
      preorderTraversal(root, INT_MIN);
      return count;
    }
};