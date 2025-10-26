#include<iostream>
using namespace std;

void inputArray(int arr[], int &n)
{
  cout << "Enter the array size: ";
  cin >> n;
  cout << "Enter the array elements (0 & 1): ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

void ansFinder(int arr[], int n)
{
  int start = 0, end = n - 1;

  while(start < end)
  {
    if(arr[start] == 0)
    {
      start++;
    }
    else if(arr[end] == 0)
    {
      swap(arr[start], arr[end]);
      start++, end--;
    }
    else
    {
      end--;
    }
  }
}

void printArray(int arr[], int n)
{
  cout << "After Sort: ";
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
  ansFinder(arr, n);
  printArray(arr, n);

  return 0;
}