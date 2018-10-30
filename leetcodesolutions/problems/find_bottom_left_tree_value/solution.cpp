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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<int> v;
        int nx=0,pr=1;
        while(!q.empty()){
            while(pr>0){
                TreeNode *temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left){
                    nx++;
                    q.push(temp->left);
                }
                if(temp->right){
                    nx++;
                    q.push(temp->right);
                }
                pr--;
            }
            pr = nx;
            nx = 0;
            if(q.empty())break;
            v.clear();
        }
        return v[0];
    }
};