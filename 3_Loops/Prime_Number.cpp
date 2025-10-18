#include <iostream>
using namespace std;

int main()
{
  int n, isPrime = 0;
  cout << "Enter the number: ";
  cin >> n;

  if (n <= 1)
  {
    cout << n << " is not a prime number.";
    return 0;
  }

  for (int i = 2; i <= n - 1; i++)
  {
    if (n % i == 0)
    {
      isPrime = 1;
      break;
    }
  }
  if (isPrime == 0)
  {
    cout << n << " is a prime number.";
  }
  else
  {
    cout << n << " is not a prime number.";
  }
}