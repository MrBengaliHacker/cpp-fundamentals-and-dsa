#include<iostream>
using namespace std;

int FindMissingNumber(int arr[], int n){
  int total = n * (n + 1) /2;

  int sum = 0;
  for(int i = 0; i < n-1; i++)
  {
    sum += arr[i];
  }
  
  return total - sum;
}

int main()
{
  int n;
  cout << "Enter value of n: ";
  cin >> n;

  int arr[n - 1];
  cout << "Enter "<< n-1 <<" numbers (from 1 to "<< n <<", with one missing number):\n";
  for(int i = 0; i < n-1; i++)
  {
    cin >> arr[i];
  }

  int missing = FindMissingNumber(arr, n);

  cout << "Missing number is : " << missing << endl;

  return 0;
}