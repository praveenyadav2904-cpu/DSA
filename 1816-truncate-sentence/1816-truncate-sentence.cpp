class Solution {
public:
    string truncateSentence(string s, int k) {

        int n = s.size();
        vector<char> temp;
        string ans = "";
        for (int i = 0; i < n; i++) {
            temp.push_back(s[i]);
        }
        for (int i = 0; i < temp.size(); i++) {
            if (k > 0) {

                if (temp[i] == ' ')
                    k--;
                if (k == 0)
                    break;
            }
            ans += temp[i];
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna