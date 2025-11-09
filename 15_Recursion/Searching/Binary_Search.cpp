#include <iostream>
using namespace std;

void binarySearch(int *ptr, int key, int start, int end)
{
  if (start > end)
  {
    cout << "Element not found.";
    return;
  }

  int mid = start + (end - start) / 2;

  if (ptr[mid] == key)
  {
    cout << "Element found at index " << mid << endl;
    return;
  }
  else if (ptr[mid] < key)
  {
    binarySearch(ptr, key, mid + 1, end);
  }
  else
  {
    binarySearch(ptr, key, start, mid - 1);
  }
}

int main()
{
  int n;

  cout << "Enter Array size: ";
  cin >> n;

  int *ptr = new int[n];

  cout << "Enter Array elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> ptr[i];
  }

  int key;
  cout << "Enter Key element: ";
  cin >> key;

  binarySearch(ptr, key, 0, n - 1);

  delete[] ptr;
}