#include <iostream>
using namespace std;

int TrailingZeroes(int n)
{
  int count = 0;

  while (n >= 5)
  {
    count += n / 5;
    n /= 5;
  }
  return count;
}

int main()
{
  int n;

  cout << "Enter the factorial: ";
  cin >> n;

  cout << "Number of trailing zeroes in " << n << "! is: " << TrailingZeroes(n) << endl;
}