#include <iostream>
#include <vector>
using namespace std;

void subArraySum(vector<int> &arr, int n)
{
  int totalSum = 0, prefix = 0;
  for (int i = 0; i < n; i++)
    totalSum += arr[i];

  for (int j = 0; j < n; j++)
  {
    prefix += arr[j];
    int rightSum = totalSum - prefix;

    if (prefix == rightSum)
    {
      cout << "\nLeft Subarray: ";
      for (int k = 0; k <= j; k++)
        cout << arr[k] << " ";

      cout << "\nRight Subarray: ";
      for (int k = j + 1; k < n; k++)
        cout << arr[k] << " ";

      cout << "\nLeft Sum  = " << prefix;
      cout << "\nRight Sum = " << rightSum;

      cout << "\n\nTwo subarrays with equal sum are possible.";
      return;
    }
  }

  cout << "\nTwo subarrays with equal sum are not possible.";
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
  cout << endl;

  cout << "You entered: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  subArraySum(arr, n);
}
