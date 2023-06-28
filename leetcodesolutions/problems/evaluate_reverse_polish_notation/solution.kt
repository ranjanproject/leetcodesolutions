class Solution {
    fun evalRPN(tokens: Array<String>): Int {

        val stack = mutableListOf<Int>()

        val operandList = listOf("+","-","/","*")

        for(num in tokens){
            if(num == "+" || num == "-" || num == "/" || num == "*"){

               val b = stack.last()
               stack.removeAt(stack.size - 1)
               val a = stack.last()
               stack.removeAt(stack.size - 1)
               
               val result = when(num){
                    "+"-> a+b
                    "-" -> a-b
                    "/"-> a/b
                    "*"-> a*b
                    else -> 0
               }

               stack.add(result)

            }else{
                stack.add(num.toInt())
            }
        
        }

        return stack[0]
    }
}