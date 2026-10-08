#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Read the file
    ifstream fin;
    // open file
    fin.open("zoom.txt");
    char c;
    c = fin.get();
    while (!fin.eof())
    {
        cout << c;
        c = fin.get();
    }
    fin.close();
}