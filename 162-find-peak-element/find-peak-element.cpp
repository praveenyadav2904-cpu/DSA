class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=n-1,mid;
        while(start<end){
            mid=start+(end-start)/2;
            if(nums[mid]<nums[mid+1]){
                start=mid+1;
            }
            if(nums[mid]>nums[mid+1]){
                end=mid;
            }
           
        }
         return start;
        
    }
};