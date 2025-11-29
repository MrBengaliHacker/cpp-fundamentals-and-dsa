#include <iostream>
#include <vector>
using namespace std;

void subArray(const vector<int> &arr, int n)
{
  cout << "Subarrays:\n";

  for (int len = 1; len <= n; len++)
  {
    cout<<"Length"<<len<<": ";
    for (int start = 0; start + len <= n; start++)
    {
      int number = 0;
      for (int i = start; i < start + len; i++)
      {
        number = number * 10 + arr[i];
      }
      cout << number << " ";
    }
    cout << endl;
  }
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

  subArray(arr, n);
}