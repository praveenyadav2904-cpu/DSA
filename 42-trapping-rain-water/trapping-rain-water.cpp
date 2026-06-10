class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int water=0;
        vector<int>maxleft(n);
        vector<int>maxright(n);
        maxleft[0]=0;
        for(int i=1;i<n;i++){
            maxleft[i]=max(maxleft[i-1],height[i-1]);
        }
        maxright[n-1]=0;
        for(int i=n-2;i>=0;i--){
            maxright[i]=max(maxright[i+1],height[i+1]);
        }
        int minheight=0;
        for(int i=0;i<n;i++){
            minheight=min(maxleft[i],maxright[i]);
        
        if(minheight-height[i]>=0)
               water+=minheight-height[i];
        }
        return water;
    }
};