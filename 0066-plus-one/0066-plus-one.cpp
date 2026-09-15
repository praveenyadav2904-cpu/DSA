class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int carry=1;
      for(int i=n-1;i>=0;i--){
         if(digits[i]==9 && carry==1){
            digits[i]=0;
            carry=1;
         }
        
         else if(digits[i]!=9){
            digits[i]+=carry;
             carry=0;
         }
        
      }
      if(carry==1){
       digits.insert(digits.begin(),1);
      }
      return digits;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna