#include <iostream>
#include <exception>
using namespace std;
int main()
{
    try
    {
        int *p = new int[1000000000];
        cout << "Memory allocated successfully";
        delete[] p;
    }
    catch (const exception &e)
    {
        cout << "Exception occured :" << e.what();
    }
}