#include <iostream>
using namespace std;

string reverseString(string s)
{
  int start = 0, end = s.size() - 1;

  while (start < end)
  {
    swap(s[start], s[end]);
    start++, end--;
  }
  return s;
}

int main()
{
  string s;

  cout << "Enter a string: ";
  getline(cin, s);

  cout << "After reverse the string is: " << reverseString(s);
}