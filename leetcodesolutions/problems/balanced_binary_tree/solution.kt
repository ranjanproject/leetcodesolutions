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
    var isTreeBalanced = true

    fun maxDepth(root: TreeNode?): Int{
      if(root == null)return 0
      else{
          val leftMax = maxDepth(root.left)
          val rightMax = maxDepth(root.right)
          if(Math.abs(rightMax-leftMax)>1)isTreeBalanced = false
          return 1 + maxOf(leftMax, rightMax)
      }
    }

    fun isBalanced(root: TreeNode?): Boolean {
        maxDepth(root)
        return isTreeBalanced
    }
}