#include <iostream>
using namespace std;
void even(int *arr, int index, int n)
{
      if (index == n)
            return;

      if (arr[index] % 2 == 0)
      {
            cout << arr[index] << " ";
      }
      return even(arr, index + 1, n);
}
int main()
{
      int arr[] = {5, 2, 6, 3, 4};

      even(arr, 0, 5);
}