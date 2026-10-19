class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n =nums.size();
        vector<int>temp;

        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
         if(nums[i]==target){
            temp.push_back(i);
         }
        }
        return temp;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna