#include <bits/stdc++.h>
using namespace std;

void permute(int arr[], vector<bool> &visited, vector<int> &temp, vector<vector<int>> &ans)
{
    if (visited.size() == temp.size())
    {
        ans.push_back(temp);
        return;
    }
    for (int i = 0; i < visited.size(); i++)
    {
        if (visited[i] == 0)
        {
            visited[i] = 1;
            temp.push_back(arr[i]);
            permute(arr, visited, temp, ans);
             visited[i] = 0;
            temp.pop_back();
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3,4};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(4, 0);

    permute(arr, visited, temp, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j]<<" ";
          
        }
          cout << endl;
    }
}