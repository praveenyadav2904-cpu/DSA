class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0,end=n-1,ans=0,mid;
        while(start<end){
            mid=start+(end-start)/2;
            if(arr[mid]<arr[mid+1]){
            start=mid+1;
            }
            else if(arr[mid]>arr[mid+1]){
                end=mid;
              
            }
        }
        
        return start;
    }
};