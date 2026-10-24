class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        int temp=0;
        int lucky=INT_MIN;

        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        unordered_map<int,int>::iterator it=m.begin();
        while( it != m.end()){
            if(it->first==it->second){
                temp=it->first;
                if(temp>lucky){
                    lucky=temp;
                }
            }
            it++;
        }
      if(lucky==INT_MIN)
      return -1;

      else
      return lucky;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna