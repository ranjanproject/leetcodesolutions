class Solution {
    fun containsDuplicate(nums: IntArray): Boolean {
        val mp = mutableMapOf<Int, Boolean>()
        for(item in nums){
            if(!mp.contains(item)){
                mp[item] = true
            }else return true
        }
        
        return false
    }
}