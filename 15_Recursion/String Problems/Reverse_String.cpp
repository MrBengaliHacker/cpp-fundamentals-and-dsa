#include <iostream>
using namespace std;

void reverse(string &s, int start, int end)
{
  if (start >= end)
    return;

  char c = s[start];
  s[start] = s[end];
  s[end] = c;

  reverse(s, start + 1, end - 1);
}

int main()
{
  string s;

  cout << "Enter a string: ";
  getline(cin, s);

  reverse(s, 0, s.length() - 1);
  cout << "Reversed string: " << s << endl;
}