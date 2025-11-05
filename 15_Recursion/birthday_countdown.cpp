#include <iostream>
using namespace std;

void fun(int n)
{
  if (n == 0)
  {
    cout << "Happy Birthday!";
    return;
  }
  cout << n << " days left for birthday." << endl;

  fun(n - 1);
}

int main()
{
  int n;
  cout << "How many days left for birthday: ";
  cin >> n;

  fun(n);
}