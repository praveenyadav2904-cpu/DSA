#include <iostream>
using namespace std;
void upper(string &str, int index)
{
    if (index == -1)
        return;
    str[index] = str[index]-32;
    upper(str, index - 1);
}
int main()
{
    string str = "mera naam praveen hai ";
    int n = str.size();
    upper(str, n - 1);
    cout << str<<" ";
}