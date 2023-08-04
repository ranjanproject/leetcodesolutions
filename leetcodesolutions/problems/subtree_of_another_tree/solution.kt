/**
 * Example:
 * var ti = TreeNode(5)
 * var v = ti.`val`
 * Definition for a binary tree node.
 * class TreeNode(var `val`: Int) {
 *     var left: TreeNode? = null
 *     var right: TreeNode? = null
 * }
 */
class Solution {
    fun isSameTree(p:TreeNode?, q: TreeNode?): Boolean {
        if(p==null && q ==null)return true
        else if(p == null || q == null || p.`val` != q.`val`)return false
        else{
            return isSameTree(p.left, q.left) && isSameTree(p.right, q.right)
        }
    }
    fun isSubtree(root: TreeNode?, subRoot: TreeNode?): Boolean {
        if(root == null) return false
       
        if(isSameTree(root, subRoot)) return true

        return isSubtree(root.left, subRoot) || isSubtree(root.right, subRoot)
    }
}