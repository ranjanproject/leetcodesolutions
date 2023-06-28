class MinStack() {
    private val numList = mutableListOf<Long>()
    private var count = 0
    private var minNumber = Int.MAX_VALUE.toLong()

    fun push(num: Int) {

        var newNum = num.toLong()
        if(count == 0)minNumber = newNum

        if(newNum < minNumber && count>0 ){
            newNum = 2L*newNum - minNumber  
            minNumber = num.toLong()
        }

        numList.add(newNum)

        count++
    }

    fun pop() {
        var num = numList[count - 1]
        numList.removeAt(count - 1)
        if(num < minNumber){
            minNumber = 2L*minNumber - num
        }
        count--
        if(count == 0){
            minNumber = Int.MAX_VALUE.toLong()
        }
    }

    fun top(): Int {
        var num = numList[count - 1]

        if(num < minNumber){
           num = minNumber
        }

        return num.toInt()
    }

    fun getMin(): Int {
        return minNumber.toInt()
    }

}

/**
 * Your MinStack object will be instantiated and called as such:
 * var obj = MinStack()
 * obj.push(`val`)
 * obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.getMin()
 */