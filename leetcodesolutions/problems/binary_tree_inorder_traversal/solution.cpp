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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> ret;
        while(1){
            while(root){
                s.push(root);
                root = root->left;
            }
            if(s.empty())break;
            
            ret.push_back(s.top()->val);
            root = s.top()->right;
            s.pop();
        }
        return ret;
    }
};