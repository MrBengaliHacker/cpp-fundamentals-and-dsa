#include <iostream>
using namespace std;

int main()
{
  int arr1[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int arr2[4][3] = {13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
  int ans[4][3];

  for (int row = 0; row < 4; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      ans[row][col] = arr1[row][col] + arr2[row][col];
    }
  }

  for (int row = 0; row < 4; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      cout << ans[row][col] << " ";
    }
    cout << endl;
  }
}