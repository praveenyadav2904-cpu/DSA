class Solution {
  public:
    int way(vector<int>& coins,int sum,int n,int index){
        if(sum==0)
        return 1;
        else if(sum<0 || index==n)
        return 0;
        
        int ans=0;
        
       
          ans+= way(coins,sum-coins[index],n,index);
            ans+=way(coins,sum,n,index+1);
            
     
       return ans;
    }
    int count(vector<int>& coins, int sum) {

           
        int n=coins.size();
        return way(coins,sum,n,0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna