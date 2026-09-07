class Solution {
  public:
    // void toh(int n,int source,int help,int dest){
    //     if(n==1){
    //       cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<endl;;
    //       return;
    //     }
    //     toh(n-1,source,dest,help);
    //       cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<endl;;;
    //       return;
    //       toh(n-1,help,source,dest);
    // }
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        // toh(n,from,to,aux);
        return pow(2,n)-1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna