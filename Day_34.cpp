//Toeplitz matrix

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
      int m=matrix.size();
      int n=matrix[0].size();
      for(int i=0;i<m-1;i++){
          for(int j=0;j<n-1;j++){
              int x=i,y=j;
              if(x+1<m&&y+1<n){
              if(matrix[x][y]==matrix[x+1][y+1]){
                  x++;
                  y++;
              }
              else
              return false;
          }
          }
      }  
      return true;
    }
};
