class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int row=matrix.size();
      int col=matrix[0].size();

      //Transpose OF Matrix
      for(int i=0;i<row-1;i++){
        for(int j=i+1;j<col;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
      }  

      //Reverse Row
      for(int i=0;i<row;i++){
        int start=0,end=col-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++,end--;
        }
      }
    }
};