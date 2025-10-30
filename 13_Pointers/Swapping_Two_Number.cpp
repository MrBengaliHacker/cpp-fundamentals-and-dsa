#include <iostream>
using namespace std;

void swapping(int *p1, int *p2)
{
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

int main()
{
  int first, second;

  cout << "Enter first number: ";
  cin >> first;

  cout << "Enter second number: ";
  cin >> second;

  swapping(&first, &second);

  cout << "After swapping - " << endl;
  cout << "First number is: " << first << endl;
  cout << "Second number is: " << second << endl;

  return 0;
}