class Solution {
public:
     void parentheses(int n,int left,int right, vector<string>&ans,string&temp)
     {
        if(left+right==2*n)
        {
            ans.push_back(temp);
            return;
        }
        //Left Parenthese
        if(left<n){
            temp.push_back('(');
            parentheses(n,left+1,right,ans,temp);
            temp.pop_back();
        }
        //RIght parentheses
        if(right<left){
            temp.push_back(')');
            parentheses(n,left,right+1,ans,temp);
             temp.pop_back();
        }
     }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        parentheses (n,0,0,ans,temp);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna