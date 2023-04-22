class Solution {
    fun plusOne(digits: IntArray): IntArray {
        var plusResult  = digits.toMutableList()
        var carry = 1
        var index = digits.size - 1
        while(index > -1){
            var sum = plusResult[index] + carry
            plusResult[index] = sum % 10
            carry = sum / 10
            if(carry == 0) break
            index--
        }
        
        if(carry != 0) plusResult.add(0, carry)
        
        return plusResult.toIntArray()
    }
}