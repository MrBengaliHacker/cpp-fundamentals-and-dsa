#include <iostream>
using namespace std;

int sum(int arr[], int n, int index)
{
  if (index == n)
  {
    return 0;
  }

  return arr[index] + sum(arr, n, index + 1);
}

int main()
{
  int arr[1000], n;

  cout << "Enter array size: ";
  cin >> n;

  cout << "Enter array elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int total = sum(arr, n, 0);

  cout << "Sum of array elements: " << total << endl;

  return 0;
}