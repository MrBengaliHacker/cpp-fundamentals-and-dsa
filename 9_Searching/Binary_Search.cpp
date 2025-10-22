#include <iostream>
using namespace std;

void printArray(int arr[], int &n)
{
  cout << "Enter Array Size: ";
  cin >> n;

  cout << "Enter Array Elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

int BinarySearch(int arr[], int n, int key)
{
  int start = 0, end = n - 1, mid;

  while (start <= end)
  {
    mid = (start + end) / 2;

    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int n, arr[1000];

  printArray(arr, n);

  int key;
  cout << "Enter The Key: ";
  cin >> key;

  int result = BinarySearch(arr, n, key);

  if (result == -1)
  {
    cout << "Element is not present in array.";
  }
  else
  {
    cout << "Element is present at index " << result;
  }

  return 0;
}