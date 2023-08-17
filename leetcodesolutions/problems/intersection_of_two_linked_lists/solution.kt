/**
 * Example:
 * var li = ListNode(5)
 * var v = li.`val`
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */

class Solution {
    fun getIntersectionNode(headA:ListNode?, headb:ListNode?):ListNode? {
        
        var temp = headA

        while(temp!=null){
            temp.`val` = -temp.`val`
            temp = temp.next
        }
        
        temp = headb
        var res:ListNode? = null
        while(temp!=null){
          if(temp.`val` < 0){
            res = temp
            break
          }
          temp = temp.next
        }

         temp = headA
         while(temp!=null){
            temp.`val` = -temp.`val`
            temp = temp.next
        }

        return res
    }
}