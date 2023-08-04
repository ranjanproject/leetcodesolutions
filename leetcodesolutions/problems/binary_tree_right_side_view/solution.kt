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
    fun rightSideView(root: TreeNode?): List<Int> {
        val result = mutableListOf<Int>()
        if(root!=null){
        val q: Queue<TreeNode> = LinkedList()
        q.add(root)
        while(q.size > 0){
          var count = q.size
          while(count>0){
              val node = q.peek()
              q.remove()
              if(node.left != null) q.add(node.left)
              if(node.right != null) q.add(node.right)
              if(count == 1){
                  result.add(node.`val`)
              }
              count--
          }
        }
    }

        return result 
    }
}