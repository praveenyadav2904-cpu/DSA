class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max1=INT_MIN;
        int max2=INT_MIN;
        int index;

        for(int i=0;i<n;i++){
           if(nums[i]>max1){
            max1=nums[i];
            index=i;
           }
        }
        for(int j=0;j<n;j++){
          if(j!=index){
                max2=max(max2,nums[j]);
          }
        }

         return (max1-1)*(max2-1);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna