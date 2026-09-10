class Solution {
  public:
  void find(int n,string &temp,vector<string>&ans,int zero,int one)
  {
      if(temp.size()==n){
          ans.push_back(temp);
          return;
      }
      
      
      temp.push_back('1');
      find(n,temp,ans,zero,one+1);
      temp.pop_back();
      
      if(zero<one){
          temp.push_back('0');
          find(n,temp,ans,zero+1,one);
          temp.pop_back();
      }
  }
    vector<string> nBitBinary(int n) {
        // code here
        vector<string>ans;
        string temp;
        int one,zero;
        
        find(n,temp,ans,0,0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna