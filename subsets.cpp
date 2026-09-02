#include <bits/stdc++.h>
using namespace std;

void subset(string &s, int index, int n, vector<string> &ans, string &temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }

    // not included
    subset(s, index + 1, n, ans, temp);
    // Included
    temp.push_back(s[index]);
    subset(s, index + 1, n, ans, temp);
    temp.pop_back();
}

int main()
{
    string s = "abcd";
    int n = s.size();
    vector<string> ans;
    string temp;
    subset(s, 0, n, ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}