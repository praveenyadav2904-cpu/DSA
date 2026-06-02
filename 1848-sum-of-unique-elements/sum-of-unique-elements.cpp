class Solution {
public:
    int sumOfUnique(vector<int>& arr) {
        int n=arr.size(),sum=0,count=0;
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<n;j++){
                
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            if(count==1){
                sum+=arr[i];
            }
            
        }
        return sum;
    }
};