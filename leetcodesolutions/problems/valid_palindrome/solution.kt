class Solution {
    fun isPalindrome(s: String): Boolean {
        val re = Regex("[^A-Za-z0-9 ]")
        
        var newString = re.replace(s, "")
        newString = newString.replace(" ", "").toLowerCase()
        
        var reverseString = newString.reversed()
        
        return newString == reverseString
    }
}