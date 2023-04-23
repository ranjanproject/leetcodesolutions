class Solution {
    fun isValidSudoku(board: Array<CharArray>): Boolean {
        
      var boardBoolean: MutableList<Boolean> = MutableList(10) { false }
        val m = 8
        val n = 8
        
       var i = 0
       var j = 0
        
       for(i in (0..m)){
          for(j in (0..n)){
                if(!board[i][j].equals('.')){
                    if(boardBoolean[board[i][j].toString().toInt()] == false){
                        boardBoolean[board[i][j].toString().toInt()] = true
                    }else{
                        return false
                    }
                }
            }
            
            boardBoolean = MutableList(10) { false }
        }
       
        
        
       boardBoolean = MutableList(10) { false }
       i = 0
       j = 0
        
       for(i in (0..m)){
          for(j in (0..n)){
                if(!board[j][i].equals('.')){
                    if(boardBoolean[board[j][i].toString().toInt()] == false){
                        boardBoolean[board[j][i].toString().toInt()] = true
                    }else{
                        return false
                    }
                }
            }
            
            boardBoolean =MutableList(10) { false }
        }
       
       
       boardBoolean =MutableList(10) { false }
       
       var sc = 0
       var sr = 0
    
       for(m in (0..2)){
       for(k in (0..2)){ 
        for(i in (sr..(sr+2))){   
          for(j in (sc..(sc + 2))){
                if(!board[i][j].equals('.')){
                    if(boardBoolean[board[i][j].toString().toInt()] == false){
                        boardBoolean[board[i][j].toString().toInt()] = true
                    }else{
                        return false
                    }
                }
            }
          }
        
         sr = sr + 3
         boardBoolean = MutableList(10) { false }
        }
          sc = sc + 3
       sr = 0 
       }
    
    
        
        return true
    }
}