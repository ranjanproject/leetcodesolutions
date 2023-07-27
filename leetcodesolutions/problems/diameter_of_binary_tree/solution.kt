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
    var maxDiameter = 0
    fun maxDepth(root: TreeNode?): Int {
        if(root == null) return 0
        else{
            val leftMaxDepth = maxDepth(root.left)
            val rightMaxDepth = maxDepth(root.right)
            maxDiameter = maxOf(maxDiameter, leftMaxDepth + rightMaxDepth)
            return 1 + maxOf(leftMaxDepth, rightMaxDepth)
        }
    }
    fun diameterOfBinaryTree(root: TreeNode?): Int {
        maxDepth(root)
        return maxDiameter
    }
}