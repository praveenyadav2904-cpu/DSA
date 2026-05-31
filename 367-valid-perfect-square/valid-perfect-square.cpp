class Solution {
public:
    bool isPerfectSquare(int num) {
        int n=num;
        int start=1,end=n-1,mid;
        if(num==1){
            return true;
        }
        while(start<=end){
            mid=start+(end-start)/2;
            if((long long)mid*mid==num){
                return true;

            }
            else if((long long)mid*mid<num){
                start=mid+1;
            }
            else
            end=mid-1;
        }
        return false;
    }    
    
};