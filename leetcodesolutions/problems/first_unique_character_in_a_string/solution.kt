class Solution {
    fun firstUniqChar(s: String): Int {
        var characterTable: MutableList<Int> = MutableList(28){0}
        
        for(c in s){
            characterTable[c.toInt() - 97]++
        }
        
        for((index,c) in s.withIndex()){
            if(characterTable[c.toInt() - 97] == 1) {
                return index
            }
        }
        
        return -1
    }
}