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
    fun partition(head: ListNode?, x: Int): ListNode? {
        var gHead: ListNode? = null
        var temp = head
        var gTemp = gHead
        var pg = gHead
        var pl = gHead
        var lHead = gHead

        while(temp!=null){
           if(temp.`val`>=x){
              if(gHead == null){
                 gHead = temp
                 pg = temp
              }else{
                 pg?.next = temp
                 pg = temp
              }   
           }else{
             if(lHead == null){
                lHead = temp
                pl = temp
              }else{
                pl?.next = temp
                pl = temp
              }
           }
           temp = temp.next
        }

       var resultHead = lHead
       if(gHead != null && lHead != null){
           pl?.next = gHead
           pg?.next = null
           resultHead = lHead
       }else if(gHead != null && lHead == null) resultHead = gHead
        else resultHead = lHead
       
       return resultHead
    }
}