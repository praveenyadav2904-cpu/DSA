class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
     vector<vector<int>> matrix (n,vector<int>(n));
     
     int top=0,right=n-1,bottom=n-1,left=0;
 int num=1;
     while(left<=right && top<=bottom){
     
      //Top Print
      for(int j=left;j<=right;j++){
        matrix[top][j]=num;
        num++;
      }
      top++;

      // RIght Print
       for(int i= top;i<=bottom;i++){
        matrix[i][right]=num;
        num++;
       }
       right --;

      //Bottom Print
       if(top<=bottom){
        for(int j=right;j>=left;j--){
            matrix[bottom][j]=num;
            num++;
        }
        bottom --;
       }
      //Left Print
       if(left<=right){
        for(int i=bottom;i>=top;i--){
          matrix[i][left]=num;
          num++;  
        }
        left++;
       }
     }
  return matrix;
    }
};