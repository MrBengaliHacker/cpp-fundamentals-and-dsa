#include<iostream>
using namespace std;

void inputArray(int arr[], int &n)
{
  cout << "Enter the array size: ";
  cin >> n;
  if (n < 1 || n > 1000)
  {
    cout << "Invalid array size! Please enter a size between 1 and 1000." << endl;
    exit(1);
  }
  cout << "Enter array elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

void bubbleSort(int arr[], int n)
{
  for (int i = n - 2; i >= 0; i--)
  {
    bool swapped = false;

    for (int j = 0; j <= i; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (!swapped)
    {
      break;
    }
  }
}

void printArray(int arr[], int n)
{
  cout << "After Bubble Sort: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[1000], n;

  inputArray(arr, n);
  bubbleSort(arr, n);
  printArray(arr, n);

}