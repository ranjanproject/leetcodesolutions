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
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> v;
        if(root != NULL){
         queue<TreeNode*> q;
         q.push(root);
         
         while(!q.empty()){
            int count = q.size();

            while(count > 0){
                TreeNode *node;
                node = q.front();
                q.pop();
                if(count == 1) v.push_back(node->val);
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                count--;
            } 
         }
        }
        return v;
    }
};