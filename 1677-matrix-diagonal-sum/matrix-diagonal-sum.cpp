class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size(),first=0,second=0,total=0;
        for(int i=0;i<n;i++){
            first+=mat[i][i];
            second+=mat[i][n-1-i];
        }
        total=first+second;
        if(n%2!=0){
            total-=mat[n/2][n/2];
        }
        return total;
    }
};