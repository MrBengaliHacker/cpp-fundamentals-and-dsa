#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
  vector<int> temp(end - start + 1);
  int left = start, right = mid + 1, index = 0;

  while (left <= mid && right <= end)
  {
    if (arr[left] <= arr[right])
    {
      temp[index] = arr[left];
      index++, left++;
    }
    else
    {
      temp[index] = arr[right];
      index++, right++;
    }
  }

  // Left array is not empty yet
  while (left <= mid)
  {
    temp[index] = arr[left];
    index++, left++;
  }
  // Right array is not empty yet
  while (right <= end)
  {
    temp[index] = arr[right];
    index++, right++;
  }

  index = 0;
  // Put these values in array
  while (start <= end)
  {
    arr[start] = temp[index];
    start++, index++;
  }
}

void mergeSort(vector<int> &arr, int start, int end)
{
  if (start >= end)
  {
    return;
  }

  int mid = start + (end - start) / 2;

  // Left Side
  mergeSort(arr, start, mid);

  // Right Side
  mergeSort(arr, mid + 1, end);

  // Merge the sorted halves
  merge(arr, start, mid, end);
}

int main()
{
  int n;
  cout << "Enter the array size: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter the array elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  mergeSort(arr, 0, n - 1);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}