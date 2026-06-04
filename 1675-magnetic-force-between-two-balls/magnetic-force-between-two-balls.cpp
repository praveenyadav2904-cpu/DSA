class Solution {
public:
    int maxDistance(vector<int>& arr, int m) {
        int start=1,end=0,mid,ans=0;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        end=arr[n-1]-arr[0];
       
        while(start<=end){
            mid=start+(end-start)/2;
            int force=1,pos=arr[0];
            for(int i=0;i<n;i++){
                if(pos+mid<=arr[i]){
                    force++;
                    pos=arr[i];
                }
            }
            if(force>=m){
                 ans=mid;
                 start=mid+1 ;
               
            }
            else{
                end=mid-1;
             
            }
        }

        return ans;
    }
};