class Solution {
    fun swap(nums: IntArray, i1: Int, i2: Int){
        val temp = nums[i1]
        nums[i1] = nums[i2]
        nums[i2] = temp
    }

    fun helperP(nums: IntArray, l: Int, ls: MutableList<MutableList<Int>>, s: Int){
        if(l == s)ls.add(nums.toMutableList())  
        for(i in l..(s-1)){
            swap(nums,i,l)
            helperP(nums, l + 1, ls, s)
            swap(nums,i,l)
        }
    }

    fun permute(nums: IntArray): List<List<Int>> {
        val ls: MutableList<MutableList<Int>> = mutableListOf()
        helperP(nums, 0, ls, nums.size)
        return ls.toList()
    }
}