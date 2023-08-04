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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> s;
        long long prev =  -2147483649;
        while(root != NULL || !s.empty()){
            while(root != NULL){
                s.push(root);
                root = root -> left;
            }
            root = s.top();
            s.pop();

           
            if(prev >= (long long)root->val) return false;
           
            prev = (long long)root->val;

            root = root->right;

        }
        return true;
    }
};