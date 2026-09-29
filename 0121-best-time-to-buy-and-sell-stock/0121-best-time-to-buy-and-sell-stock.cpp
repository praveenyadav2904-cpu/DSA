class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX;
        int maxi=0;
        int count=0;
        int index=0;

        for(int i=0;i<n;i++){
            if(prices[i]<mini){
                mini=prices[i];
            }
            int profit=prices[i]-mini;

            if(profit>maxi){
                maxi=profit;
            }
        }
       

        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna