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
    void fun(TreeNode *root,int &v){
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            v = v+root->val;
            root->val = v;
            return;
        }
        else{
            if(root->right){
                fun(root->right,v);
                root->val = root->val + v;
                v = root->val;
                // cout<<v<<endl;
            }
            else{
                root->val = root->val + v;
                v = root->val;
            }
            if(root->left){
                if(root->left->right)
                 fun(root->left->right,v);
                
                root->left->val+=v;
                v = root->left->val;
                fun(root->left->left,v);
            }
        }
    }
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL)return root;
//         if(root->right==NULL && root->left==NULL){
//             return root;
//         }
//         else{
            
//             if(root->right!=NULL){
//                 root->val = root->val + convertBST(root->right)->val;
//             }
//             if(root->left->right!=NULL){
//                 root->left->right->val = root->val
//             }
//             if(root->left!=NULL){
//                root->left->val = root->val + convertBST(root->left)->val; 
//             }
//             return root;
//         }
        int v=0;
        fun(root,v);
        return root;
    }
};