class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
       vector<pair<char,int>>ans;
        unordered_map<char,int>m;
        string finalans="";

        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        unordered_map<char,int>:: iterator it =m.begin();
        while(it!=m.end()){
            ans.push_back({it->first,it->second});
            it++;
        }  
        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                if(ans[i].second<ans[j].second){
                    swap(ans[i],ans[j]);
                }
            }
        }

        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].second;j++){
            finalans+=ans[i].first;
            }
        }
        return finalans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna