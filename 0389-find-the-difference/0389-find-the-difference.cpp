class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> m;

        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++) {
            m[t[i]]--;
        }
        for (int i = 0; i < t.size(); i++) {
            if (m[t[i]] < 0) {
                return t[i];
            }
        }
        return ' ';
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna