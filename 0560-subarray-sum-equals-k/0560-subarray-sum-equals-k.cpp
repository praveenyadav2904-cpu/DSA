class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int sum;
        int n=nums.size();
        for(int i=0;i<n;i++){
             sum=0;
             for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum==k)
                count++;
             }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna