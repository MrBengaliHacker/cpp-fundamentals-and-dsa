#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number: ";
  cin >> n;

  if (n <= 0)
  {
    cout << "Please enter a positive number.";
    return 0;
  }

  int a = 0, b = 1;

  cout << "The Fibonacci series is: ";

  if (n >= 1)
    cout << a << " ";
  if (n >= 2)
    cout << b << " ";

  for (int i = 3; i <= n; i++)
  {
    int result = a + b;
    cout << result << " ";
    a = b;
    b = result;
  }  
}