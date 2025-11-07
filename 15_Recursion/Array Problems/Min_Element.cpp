#include <iostream>
using namespace std;

int minElement(int arr[], int n, int index)
{
  if (index == n - 1)
  {
    return arr[index];
  }

  return min(arr[index], minElement(arr, n, index + 1));

// Recursive logic without min()

  // // Recursive call: find min of the rest
  // int restMin = minElement(arr, n, index + 1);

  // // Compare current element with restMin manually
  // if (arr[index] < restMin)
  //   return arr[index];
  // else
  //   return restMin;
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

  int small = minElement(arr, n, 0);

  cout << "Minimum Element in this Array is: " << small << endl;

  return 0;
}