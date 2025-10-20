#include <iostream>
using namespace std;

void inputArray(int arr[],int &n)
{
  cout << "Enter the size of array: ";
  cin >> n;

  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int index = i;

    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[index])
      {
        index = j;
      }
    }
    // swap(arr[i], arr[index]);
    int temp = arr[i];
    arr[i] = arr[index];
    arr[index] = temp;
  }
}

void printArray(int arr[],int n)
{
  cout << "After Selection Sort: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[1000];
  int n;

  inputArray(arr,n);
  selectionSort(arr,n);
  printArray(arr, n);

  return 0;
}