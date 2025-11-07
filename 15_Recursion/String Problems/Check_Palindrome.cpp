#include <iostream>
#include <cctype>
using namespace std;

bool isPalindrome(string s, int start, int end)
{
  if (start >= end)
  {
    return 1;
  }

  if (s[start] != s[end])
  {
    return 0;
  }
  else
    return isPalindrome(s, start + 1, end - 1);
}

int main()
{
  string s;

  cout << "Enter a string: ";
  getline(cin, s);

  int start = 0, end = s.size() - 1;

  cout << isPalindrome(s, start, end) << endl;
}