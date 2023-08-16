class Solution {
    fun helperSum(candidates: IntArray, target: Int, result: MutableList<MutableList<Int>>, ls: MutableList<Int>, s: Int){
        if(target == 0){
            result.add(ls.toMutableList())
            return
        }
        if(target<0)return
        val size = candidates.size - 1
        for(i in s..size){
           val n = candidates[i] 
           ls.add(n) 
           helperSum(candidates, target - n, result, ls, i)
           ls.remove(n)
        }
    }

    fun combinationSum(candidates: IntArray, target: Int): List<List<Int>> {
        val result: MutableList<MutableList<Int>> = mutableListOf()
        helperSum(candidates, target, result, mutableListOf(), 0)
        return result
    }
}