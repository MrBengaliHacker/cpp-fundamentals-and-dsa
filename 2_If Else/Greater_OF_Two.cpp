#include<iostream>
using namespace std;

int main()
{
  int a, b;

  cout << "Enter your first number: ";
  cin >> a;
  cout << "Enter your second number: ";
  cin >> b;

  if (a > b)
  {
    cout << ""<< a <<" is greater.";
  }
  else if (b > a)
  {
    cout << ""<< b <<" is greater.";
  }
  else
  {
    cout << "Both numbers are equal.";
  }
}