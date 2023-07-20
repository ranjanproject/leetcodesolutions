class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size(), n = matrix[0].size();

        int l = 0, r = m*n - 1, midIndex, midV ;

         while(l<=r){

          midIndex = l + (r-l)/2;

          int mr = midIndex/n, mc = midIndex%n;

          midV = matrix[mr][mc];

          if(midV == target){
            return true;
          }else if(midV > target){
            r = midIndex - 1;
          }else{
            l = midIndex + 1;
          }

         }

         return false;
    }
};