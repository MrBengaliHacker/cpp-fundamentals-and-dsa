#include<iostream>
using namespace std;

void inputArray(int arr[], int &n)
{
  do
  {
    cout << "Enter the array size (1 to 1000): ";
    cin >> n;
  } while(n < 1 || n > 1000);

  cout << "Enter array elements: ";
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

void insertionSort(int arr[], int n)
{
  for(int i = 1; i < n; i++)
  {
    for(int j = i; j > 0; j--)
    {
      if(arr[j] < arr[j - 1])
      {
        swap(arr[j], arr[j - 1]);
      }
      else
      {
        break;
      }
    }
  }
}

void printArray(int arr[], int n)
{
  cout << "After Insertion Sort: ";
  for(int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[1000], n;

  inputArray(arr, n);
  insertionSort(arr, n);
  printArray(arr, n);

  return 0;
}