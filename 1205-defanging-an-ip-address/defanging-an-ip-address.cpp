class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.size();
        int index=0;
        string ans;

        while(index<n){
            if(address[index]=='.'){
                ans+="[.]";
            }
            else
            ans+=address[index];
            index++;
        }
        return ans;
    }
};