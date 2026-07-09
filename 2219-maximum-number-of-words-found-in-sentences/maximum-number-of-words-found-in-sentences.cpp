class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int count=0,ans=0;
       for(int i=0;i<sentences.size();i++){
        count=1;
        for(int j=0;j<sentences[i].size();j++){
            if(sentences[i][j]==' ')
            count++;
        }
        if(count>ans)
        ans=count;
       }
       ans=max(ans,count);
       return ans;
    }
};