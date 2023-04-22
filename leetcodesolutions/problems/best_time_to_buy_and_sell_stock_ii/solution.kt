class Solution {
    fun maxProfit(prices: IntArray): Int {
        
        var prevDayPrice = prices[0]
        var nextDayPrice = 0
        var maximumProfit = 0
        var lengthOfArray = prices.size - 1
        
        for(index in 1..lengthOfArray){
            nextDayPrice = prices[index]
            if(nextDayPrice >= prevDayPrice){
                maximumProfit += nextDayPrice - prevDayPrice
            }
            prevDayPrice = nextDayPrice
        }
        
        return maximumProfit
        
    }
}