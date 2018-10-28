class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int k,i,j;
        for(k=0;k<matrix[0].size();k++){
            i =1;j=k+1;
            while(i<matrix.size()&&j<matrix[0].size()){
                if(matrix[i-1][j-1]!=matrix[i][j])return false;
                i++;j++;
            }
        }
        for(k=1;k<matrix.size();k++){
            i = k+1;j=1;
            while(i<matrix.size()&&j<matrix[0].size()){
                if(matrix[i-1][j-1]!=matrix[i][j])return false;
                i++;j++;
            }            
        }
        return true;
    }
};