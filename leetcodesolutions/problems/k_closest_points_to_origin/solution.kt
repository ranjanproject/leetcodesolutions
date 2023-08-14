class Solution {
    fun kClosest(points: Array<IntArray>, k: Int): Array<IntArray> {

    //    creating min_heap
        val compareByDesc: Comparator<Pair<Double, IntArray>> = compareBy { it.first }
        val pQueue = PriorityQueue<Pair<Double,IntArray>>(compareByDesc)
        
        for(point in points){
        
             var distance: Double = (point[0]*point[0] + point[1]*point[1]).toDouble()
             distance = Math.sqrt(distance.toDouble())
             val p = Pair<Double, IntArray>(first = distance, second = point)
            //  println(p.toString())
             pQueue.add(p)
        }

        val listOfPoints = mutableListOf<IntArray>()

        for(i in 1..k){
            val x = pQueue.peek()
            pQueue.remove()
            listOfPoints.add(x.second)
        }
        return listOfPoints.toTypedArray()

    }
}