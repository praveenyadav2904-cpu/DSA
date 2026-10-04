class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>ans;
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;

        for(int i=0;i<n;i++){
            m1[nums1[i]]++;
        }
         for(int i=0;i<m;i++){
            m2[nums2[i]]++;
        }

        for(auto it=m1.begin();it!=m1.end();it++){
            for(auto itt=m2.begin();itt!=m2.end();itt++){
            if(it->first==itt->first){
                ans.push_back(it->first);
            }
        }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna