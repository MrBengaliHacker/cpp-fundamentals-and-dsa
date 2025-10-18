#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {2, 4, 5, 6, 8};

  for (int i = 4; i >= 0; i--)
  {
    cout << arr[i] << " ";
  }
  return 0;
}