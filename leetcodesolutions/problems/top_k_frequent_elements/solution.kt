class Solution {
 fun topKFrequent(nums: IntArray, k: Int): IntArray {

       val map = nums.toList().groupingBy { it }.eachCount()
        val entries = map.entries.toList().sortedBy { it.value }
        val result = mutableListOf<Int>()
        var count = 0
        for (i in entries.indices.reversed()) {
            count++
            if (count == k + 1) break
            result.add(entries[i].key)
        }
        return result.toIntArray()

    }
}