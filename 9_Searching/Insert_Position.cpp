#include <iostream>
using namespace std;

void inputArray(int arr[], int &n)
{
  cout << "Enter the array size: ";
  cin >> n;

  cout << "Enter the array elements (sorted): ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

int positionGuess(int arr[], int n, int key)
{
  int start = 0, end = n - 1, mid;

  while (start <= end)
  {
    mid = start + (end - start) / 2; // Avoid overflow

    if (arr[mid] == key)
    {
      return mid; // Key found
    }
    else if (arr[mid] < key)
    {
      start = mid + 1; // move right
    }
    else
    {
      end = mid - 1; // move left
    }
  }
  // If key is not found, start will be the position where it should be inserted
  return start;
}

int main()
{
  int arr[1000], n, key;

  inputArray(arr, n);

  cout << "Enter key element: ";
  cin >> key;

  int pos = positionGuess(arr, n, key);

  // Check whether element actually exists
  if (pos < n && arr[pos] == key)
  {
    cout << "Element " << key << " is present at index " << pos << "." << endl;
  }
  else
  {
    cout << "Element " << key << " is not present; it should be inserted at index " << pos << "." << endl;
  }

  return 0;
}
