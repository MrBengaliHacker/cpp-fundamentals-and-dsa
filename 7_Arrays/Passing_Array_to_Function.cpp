#include<iostream>
using namespace std;

void Fun(int a[], int n)
{
  for(int i = 0; i < n; i++)
  {
    cout << a[i]<< " ";
  }
}

int main()
{
  int arr[5] = {2, 4, 6, 8, 10};
  Fun(arr, 5);

}
