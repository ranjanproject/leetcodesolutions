data class TrieNode(
       var charList: MutableList<TrieNode?> = MutableList<TrieNode?>(26){null},
       var isEndOfWord: Boolean = false
    )

class Trie() {
    private var llHead: TrieNode? = null 

    fun insert(word: String) {
        if(llHead == null){
            llHead = TrieNode()
        }

        var temp = llHead
        
        for(c in word){
            var index = c.toInt()-97
            if(temp!!.charList[index] == null){
                temp.charList[index] = TrieNode()
            }
           temp = temp.charList[index]
        }

        temp!!.isEndOfWord = true
    }

    fun search(word: String): Boolean {
        var temp = llHead
        var count = word.length
        for(c in word){
            var index = c.toInt()-97
            if(temp == null || temp.charList[index] == null){
                return false
            }
            temp = temp.charList[index]
        }
    
        return temp!!.isEndOfWord
    }

    fun startsWith(prefix: String): Boolean {
       var temp = llHead
         for(c in prefix){
            var index = c.toInt()-97
            if(temp == null || temp.charList[index] == null){
                return false
            }
             temp = temp.charList[index]
        }
        return true
    }

}

/**
 * Your Trie object will be instantiated and called as such:
 * var obj = Trie()
 * obj.insert(word)
 * var param_2 = obj.search(word)
 * var param_3 = obj.startsWith(prefix)
 */