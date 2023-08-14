class Twitter() {


    val tweetList = mutableListOf<Tweet>()
    val mp = mutableMapOf<Int, MutableList<Int>>()

    fun postTweet(userId: Int, tweetId: Int) {
        tweetList.add(Tweet(userId, tweetId))
        if(mp[userId] == null){
            mp[userId] = mutableListOf<Int>(userId)
        }
    }

    fun getNewsFeed(userId: Int): List<Int> {
        val listOfNewsFeed = mutableListOf<Int>()
        val followList = mp[userId]

        if(followList != null){
         val n = tweetList.size - 1
         for(i in n downTo 0){
            val tweet = tweetList[i]
            if(followList.contains(tweet.userId)) listOfNewsFeed.add(tweet.tweetId)
              if(listOfNewsFeed.size == 10)break
           }
        }

        return listOfNewsFeed.toList()
    }

    fun follow(followerId: Int, followeeId: Int) {
        if(mp[followerId] == null){
            mp[followerId] = mutableListOf<Int>(followerId)
        }
        mp[followerId]?.add(followeeId)
    }

    fun unfollow(followerId: Int, followeeId: Int) {
        if(followerId != followeeId){
           mp[followerId]?.remove(followeeId)
        }
    }

}

data class Tweet(val userId: Int, val tweetId: Int)

/**
 * Your Twitter object will be instantiated and called as such:
 * var obj = Twitter()
 * obj.postTweet(userId,tweetId)
 * var param_2 = obj.getNewsFeed(userId)
 * obj.follow(followerId,followeeId)
 * obj.unfollow(followerId,followeeId)
 */