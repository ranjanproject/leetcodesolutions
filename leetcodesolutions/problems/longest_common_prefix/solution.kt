class Solution {
    fun longestCommonPrefix(strs: Array<String>): String {
        var commonPrefix = strs[0]
        
        for(s in strs){
            
            val lengthOfLoop = minOf(s.length, commonPrefix.length)
            
            if(lengthOfLoop == 0) return ""
            var newString = ""
            
            for(i in 0..(lengthOfLoop - 1)){
                if(commonPrefix[i] == s[i]){
                    newString += commonPrefix[i]
                }else{
                    break
                }
            }
            
            commonPrefix = newString
        }
        
        return commonPrefix
    }
}