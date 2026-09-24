class Solution {
public:
    string reverseVowels(string arr) {
        int n=arr.size();
        // string s diya tha maine galti se use code me arr likh diya tha,to baad me dekha input me s hai arr nhi ,isliye maine sidhe s ko arr kar diya

        int start=0,end=n-1;
       while(start<=end){
            if (arr[start]!='a'&& arr[start]!='A'&& arr[start]!='e'&& arr[start]!='E' && arr[start]!='I'&& arr[start]!='i'&& arr[start]!='O'&& arr[start]!='o'&& arr[start]!='U' && arr[start]!='u'){
                start++;
            }
            else if (arr[end]!='a'&& arr[end]!='A'&& arr[end]!='E'&& arr[end]!='e'&& arr[end]!='I'&& arr[end]!='i'&& arr[end]!='o'&& arr[end]!='O'&& arr[end]!='u'&& arr[end]!='U'){
            end--;
            }

            else {
            swap(arr[start],arr[end]);
            start++;
            end--;
            }
        }
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna