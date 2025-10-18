#include <iostream>
using namespace std;

bool Rectangle(int a, int b, int c, int d)
{
  if (a == b && c == d || a == c && b == d || a == d && b == c)
    return 1;
  else
    return 0;
}

int main()
{
  int num1, num2, num3, num4;

  cout << "You want to form a rectangle ?" << endl;
  cout << "Enter 1st number: ";
  cin >> num1;
  cout << "Enter 2nd number: ";
  cin >> num2;
  cout << "Enter 3rd number: ";
  cin >> num3;
  cout << "Enter 4th number: ";
  cin >> num4;

  if (Rectangle(num1, num2, num3, num4))
    cout << "Yes, it can form a rectangle." << endl;
  else
    cout << "No, it cannot form a rectangle." << endl;
}