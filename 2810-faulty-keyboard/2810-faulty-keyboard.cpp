class Solution {
public:
    string finalString(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='i'){
                reverse(ans.begin(),ans.end());

            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna