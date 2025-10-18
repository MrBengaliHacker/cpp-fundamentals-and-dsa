#include<iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter array size: ";
  cin >> n;

  int arr[1000];
  cout<<"Enter the array elements: ";
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int temp = arr[n - 1]; // Store the last element

  // Shift elements to the right by one position
  for(int i = n - 2; i >= 0; i--)
  {
    arr[i + 1] = arr[i];
  }

  arr[0] = temp; // Move the last element to the front

  // Print the final rotated array
  cout << "The final array is: ";
  for(int i = 0; i < n; i++)
  {
    cout<< arr[i]<<" ";
  }

}