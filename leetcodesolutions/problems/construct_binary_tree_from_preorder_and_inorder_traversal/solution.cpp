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
    int ind(vector<int> in,int n,int s,int e){
        int i,index=-1;
        for(i=s;i<=e;i++){
            if(in[i]==n)index=i;
        }
        return index;
    }
    TreeNode* tree(vector<int>& pre,vector<int>& in,int s,int e,int& i){
        if(s>e || s<0 || e>=pre.size()||i==pre.size()){
            return NULL;
        }
        else{
            TreeNode *root;
            root = new TreeNode(pre[i]);
            int t=ind(in,pre[i],s,e);
            i++;
            root->left =tree(pre,in,s,t-1,i) ;
            root->right =tree(pre,in,t+1,e,i);
            return root;
        }
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int i;
        i=0;
        return tree(preorder,inorder,0,preorder.size()-1,i);
    }
};