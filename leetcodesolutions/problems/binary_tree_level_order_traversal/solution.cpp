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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int> > ret;
        if(!root)return ret;
        vector<int> b;
        q.push(root);
        int nx=0,pr = 1;
        while(!q.empty()){
            nx = 0;
            while(pr>0){
                TreeNode* temp = q.front();
                q.pop();
                b.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                    nx++;
                }
                if(temp->right){
                    q.push(temp->right);
                    nx++;
                }
                pr--;
            }
            ret.push_back(b);
            b.clear();
            pr = nx;
        }
        return ret;
    }
};