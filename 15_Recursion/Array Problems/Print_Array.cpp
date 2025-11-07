#include <iostream>
using namespace std;

void print(int arr[], int n, int index)
{
  if (index == n - 1)
  {
    cout << arr[index];
    return;
  }
  cout << arr[index] << " ";
  print(arr, n, index + 1);
}

void printReverse(int arr[], int n, int index)
{
  if (index == n)
  {
    return;
  }
  printReverse(arr, n, index + 1);
  cout << arr[index] << " ";
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

  cout << "Your array is: ";
  print(arr, n, 0);
  cout << endl;

  cout << "Array in reverse order: ";
  printReverse(arr, n, 0);
  cout << endl;

  return 0;
}