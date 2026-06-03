class Solution {
public:
    int splitArray(vector<int>& arr, int k) {
        int n=arr.size();
        int start=0,end=0,mid,ans=0;
        for (int i=0;i<n;i++){
            start=max(start,arr[i]);
            end=end+arr[i];
        }
        while(start<=end){
            mid =start+(end-start)/2;
            int count=1,pages=0;
            for(int i= 0;i<n;i++){
                pages+=arr[i];
                if(pages>mid){
                    count++;
                    pages=arr[i];
                }
            }
            if(count<=k){
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }
};