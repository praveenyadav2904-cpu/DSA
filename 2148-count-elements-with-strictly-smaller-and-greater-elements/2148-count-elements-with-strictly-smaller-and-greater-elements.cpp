class Solution {
public:
    int countElements(vector<int>& arr) {
        int n = arr.size();
        int count = 0;

        int maxi = *max_element(arr.begin(), arr.end());
        int mini = *min_element(arr.begin(), arr.end());

        for(int i=0;i<n;i++){
            if(arr[i]>mini && arr[i]<maxi)
            count++;
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna