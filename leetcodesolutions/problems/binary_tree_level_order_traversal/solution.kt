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
    fun levelOrder(root: TreeNode?): List<List<Int>> {
        val result: MutableList<MutableList<Int>> = mutableListOf()
        
        if(root != null){

          val q: Queue<TreeNode> = LinkedList()  
          

          q.add(root)

          while(q.size > 0){
            var rowList = mutableListOf<Int>()
            var count = q.size
            while(count>0){
                val node: TreeNode = q.peek()
                q.remove()
                 if(node != null){
                      if(node.left !=null)q.add(node.left)
                      if(node.right !=null)q.add(node.right)    
                      rowList.add(node.`val`)
                 }
                 count--
            }
              result.add(rowList)
          }

        }

        
        return result
    }
}