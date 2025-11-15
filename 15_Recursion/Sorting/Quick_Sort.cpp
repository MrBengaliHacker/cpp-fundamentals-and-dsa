#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
  int pos = start;

  for (int i = start; i <= end; i++)
  {
    if (arr[i] <= arr[end])
    {
      swap(arr[i], arr[pos]);
      pos++;
    }
  }
  return pos - 1;
}

void quickSort(vector<int> &arr, int start, int end)
{
  if (start >= end)
  {
    return;
  }

  int pivot = partition(arr, start, end);

  // For left side check
  quickSort(arr, start, pivot - 1);

  // For right side check
  quickSort(arr, pivot + 1, end);
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

  quickSort(arr, 0, n - 1);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i]<<" ";
  }
}