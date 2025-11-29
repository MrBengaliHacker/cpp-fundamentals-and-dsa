#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void maxSubarray(vector<int> &arr, int n)
{
  long long maxi = INT_MIN, prefix = 0;
  for (int i = 0; i < n; i++)
  {
    prefix += arr[i];
    maxi = max(prefix, maxi);
    if (prefix < 0)
    {
      prefix = 0;
    }
  }
  cout << "\nMaximum sum of contiguous subarray = " << maxi << endl;
}

int main()
{
  int n;

  cout << "Enter array size: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter array elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  maxSubarray(arr, n);
}
