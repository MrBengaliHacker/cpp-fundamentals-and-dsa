#include <iostream>
using namespace std;

void linearSearch(int *ptr, int n, int key, int index)
{
  // Base case: if index reaches end of array
  if (index == n)
  {
    cout << "Element not found.";
    return;
  }

  // If key is found
  if (key == ptr[index])
  {
    cout << "Element found at index " << index << endl;
    return;
  }

  // Recursive call
  linearSearch(ptr, n, key, index + 1);
}

int main()
{
  int n;
  cout << "Enter array size: ";
  cin >> n;

  int *ptr = new int[n];

  cout << "Enter array elements: ";
  for (int i = 0; i < n; i++)
    cin >> ptr[i];

  int key;
  cout << "Enter key element: ";
  cin >> key;

  linearSearch(ptr, n, key, 0);

  delete[] ptr;
  return 0;
}
