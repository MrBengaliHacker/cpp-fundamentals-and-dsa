#include <iostream>
using namespace std;

int sum(int a, int b) // Function Declare
{
  int add = a + b; // Function Define
  return add;
}

int multiplication(int a, int b) // Function Declare
{
  int mul = a * b; // Function Define
  return mul;
}

int main()
{
  int a, b;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;

  // Function Call
  cout << "The sum of " << a << " and " << b << " is " << sum(a, b) << endl;

  // Function Call
  cout << "The multiplication of " << a << " and " << b << " is " << multiplication(a, b);
}
