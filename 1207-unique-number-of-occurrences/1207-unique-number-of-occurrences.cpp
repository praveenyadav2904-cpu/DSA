class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>m1;
        unordered_map<int,bool>m2;
        for(int i=0;i<n;i++){
            m1[arr[i]]++;
        }
        for(auto it = m1.begin();it!=m1.end();it++){
            int val = it->second;
            if(m2.find(val)!=m2.end()) return false;
            m2[val]=1;
        }
return  true;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna