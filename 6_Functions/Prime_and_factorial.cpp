#include <iostream>
using namespace std;

bool isPrime(int a)
{
  if (a < 2)
    return 0;

  for (int i = 2; i * i <= a; i++)
  {
    if (a % i == 0)
      return 0;
  }
  return 1;
}

long long fact(int a)
{
  long long ans = 1;
  for (int i = 1; i <= a; i++)
  {
    ans = ans * i;
  }
  return ans;
}

int main()
{
  int n;

  cout << "Enter the number: ";
  cin >> n;

  if (isPrime(n))
  {
    cout << "The number is prime." << endl;
  }
  else
  {
    cout << "The number is not prime." << endl;
  }

  cout << "The factorial of " << n << " is " << fact(n) << endl;
}