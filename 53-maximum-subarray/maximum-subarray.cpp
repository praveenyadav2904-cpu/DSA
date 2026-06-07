class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN,prefix=0;
        for(int i=0;i<n;i++){
         prefix+=nums[i];
         maxi=max(prefix,maxi);
         if(prefix<0)
         prefix=0;
        }
        return maxi;
    }
};