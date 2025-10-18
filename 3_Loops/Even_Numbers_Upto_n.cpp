#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Up to which number do you want to even? ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      cout << i << " is even.\n";
    }
  }
}