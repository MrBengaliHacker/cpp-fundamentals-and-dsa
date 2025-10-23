#include<iostream>
using namespace std;

void inputArray(int arr[], int &n)
{
  cout << "Enter array size: ";
  cin >> n;

  cout<< "Enter array elements: ";
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

int linearSearch(int arr[], int n, int key)
{
  for(int i = 0; i < n; i++)
  {
    if(arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int arr[1000], n;

  inputArray(arr, n);

  int key;
  cout<<"Enter the key element: ";
  cin>> key;

  int index = linearSearch(arr, n, key);

  cout << "After Linear Search"<<endl;
  if(index == -1)
  {
    cout<<"Key element not found!";
  }
  else
  {
    cout<<"Key found at index "<<index;
  }
}
