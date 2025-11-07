#include <iostream>
using namespace std;

void evenPrint(int n)
{
  if (n < 2)
  {
    return;
  }

  evenPrint(n - 2);
  cout << n << endl;
}

int main()
{

  int n;

  cout << "Enter a number: ";
  cin >> n;

  if (n % 2 != 0)
  {
    n = n - 1;
  }

  evenPrint(n);
}