class KthLargest(val k: Int, nums: IntArray) {
   val streamNum = mutableListOf<Int>()
   var size = 0
    init{
        for(n in nums){
            if(size < k){
              size++  
              streamNum.add(n)
              correctViolation()
            }else{
               if(streamNum[0]<n){
                  //remove operation 
                  streamNum[0] = streamNum[k-1]
                  minHeapify()
                  //add new element at last and correct violation
                  streamNum[k-1] = n
                  correctViolation()
               } 
            }
        }
    }

    fun add(n: Int): Int { 
        if(k>size){
            streamNum.add(n)
            size++
            correctViolation()
            return streamNum[0]
        }
        if(n > streamNum[0]){
           //remove operation 
            streamNum[0] = streamNum[k-1]
            minHeapify()
             //add new element at last and correct violation
            streamNum[k-1] = n
            correctViolation()
        }
        return streamNum[0]
    }

    fun correctViolation(){
       var i = size - 1
       while(i>0 && streamNum[i] < streamNum[parentNode(i)]){
           swap(i, parentNode(i))
           i = parentNode(i)
       }
    }

    /**
      * problem was with calculation of parent index
      * if we will take i/2 as parent then it will fail because lets say parent is 5th  index  so its right child will be 5*2 + 2 = 12 so if we calculate parent from 12 by using 12/2 then we will get 6 which was not the original parent index hence to calculate the parent index from an index we should subtract -1 from it like 12 - 1 = 11 and then we will do 11/2 and it will give parent 5.
      *
     **/
    private fun parentNode(i: Int): Int = (i - 1)/2
    private fun leftNode(i: Int): Int = 2*i + 1
    private fun rightNode(i:Int): Int = 2*i + 2

    private fun minHeapify(){
       var p = 0
       var largest = 0
       while(largest < size - 1){
          var left = leftNode(p)
          if(left < size && streamNum[left] < streamNum[p]){
              largest = left
          }
          var right = rightNode(p)
          if(right<size && streamNum[right] < streamNum[largest]){
              largest = right
          }
          if(p == largest)break
          swap(p,largest)
          p = largest
       }

    }

    fun swap(index1: Int, index2: Int){
      var temp = streamNum[index1]
      streamNum[index1] = streamNum[index2]
      streamNum[index2] = temp
    }

}

/**
 * Your KthLargest object will be instantiated and called as such:
 * var obj = KthLargest(k, nums)
 * var param_1 = obj.add(`val`)
 */