class Solution {
public:
    int maxDistance(vector<int>& arr, int m) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int start=1,end,ans=0,mid;
        end=arr[n-1]-arr[0];
        while(start<=end){
            mid=start+(end-start)/2;
            int count=1,pos=arr[0];
            for(int i=0;i<n;i++){
                if(mid+pos<=arr[i]){
                  count++;
                    pos=arr[i];
                }
            }
            if(count<m){
                 end=mid-1;
            }
            else{
                ans=mid;
                 start=mid+1;
            }
        }
        return ans;
    }
};