class Solution {
    fun getSubset(l: Int, nums: IntArray, subsetLs:MutableList<MutableList<Int>>){
      if(l >= nums.size){
          subsetLs.add(mutableListOf())
          return
      }
      val n = nums[l]
      getSubset(l+1, nums, subsetLs)
      val s2 = subsetLs.size -1
      for(i in 0..s2){
          val ls = subsetLs[i].toMutableList()
          ls.add(n)
          subsetLs.add(ls)   
      }
    }
    fun subsets(nums: IntArray): List<List<Int>> {
        val subSetList: MutableList<MutableList<Int>> = mutableListOf()
        
        getSubset(0,nums,subSetList)
        
        return subSetList

    }
}