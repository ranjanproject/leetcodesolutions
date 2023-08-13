class Solution {
   private var size = 0
   private val nums = mutableListOf<Int>()

    fun lastStoneWeight(stones: IntArray): Int {
        prepareHeapFromArray(stones)
        while(size>1){
          var sm = nums[0]
          var s = nums[0].toString() + " "
          removeMax()
          sm -= nums[0]
          s += nums[0].toString()
          removeMax()
          nums[size] = sm
          size++
          correctViolation()
        }

        return nums[0]
    }

    private fun prepareHeapFromArray(stones: IntArray){
       for(n in stones){
           nums.add(n)
           size++
           correctViolation()
       }
    }

    private fun maxHeapify(){
      var p = 0
      var largest = p

      while(largest < size){
          val left = leftNode(p)
          if(left < size && nums[left] > nums[p]) largest = left
          val right = rightNode(p)
          if(right < size && nums[right]> nums[largest]) largest = right
          if(p == largest) break
          swap(p, largest)
          p = largest
      }

    }

    private fun correctViolation(){
       var i = size - 1
       
       while(i > 0 && nums[i]>nums[parent(i)]){
           swap(i, parent(i))
           i = parent(i)
       }

    //  println(nums.toString())
    }

    private fun removeMax(){
      nums[0] = nums[size - 1]
      size--
      maxHeapify()
    }

    private fun parent(i: Int) = (i - 1)/2

    private fun leftNode(i: Int) = i*2 + 1

    private fun rightNode(i: Int) = i*2 + 2

    private fun swap(index1: Int, index2: Int){
        val temp = nums[index1]
        nums[index1] = nums[index2]
        nums[index2] = temp
    }
}