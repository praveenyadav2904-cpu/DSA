class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int m=accounts.size();
       int n=accounts[0].size();
          int large=INT_MIN;
       for(int i=0;i<m;i++){
        int  total=0;
        for(int j=0;j<n;j++){
          
           total+=accounts[i][j];
           
        }
        if(total>large){
            large=total;
           }
       } 
       return large;
    }
};