class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0,n=nums.size();
       
        for(int i=0;i<n;i++){
             int num=nums[i];
            int count=0;
        
           while(num>0){
            count++;
            num/=10;
           }
           if(count%2==0)
           ans++;
        }
        return ans;
    }
};