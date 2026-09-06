class Solution {
public:
        int way(vector<int>& coins,int amount,int n,int index)
        {
            if(amount==0)
            return 1;
            else if(amount<0 || index==n)
            return 0;
           int ans=0;
          ans+= way(coins,amount-coins[index],n,index);
         ans+=  way(coins,amount,n,index+1);
         return ans;
        }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();

       return way(coins,amount,n,0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna