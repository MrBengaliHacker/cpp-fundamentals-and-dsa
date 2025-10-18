#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[5] = {5, 9, 3, 7, 6};
  int ans = INT_MAX;

  for (int i = 0; i < 5; i++)
  {
    if (arr[i] < ans)
    {
      ans = arr[i];
    }
  }
  cout << ans;
  return 0;
}