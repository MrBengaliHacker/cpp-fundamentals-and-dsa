#include <iostream>
#include <cctype>
using namespace std;

void isPalindrome(string s)
{
  int start = 0, end = s.size() - 1;

  while (start < end)
  {
    if (tolower(s[start]) != tolower(s[end]))
    {
      cout << s << " is Not a Palindrome" << endl;
      return;
    }
    start++, end--;
  }
  cout << s << " is a Palindrome" << endl;
}

int main()
{
  string s;

  cout << "Enter a string: ";
  getline(cin, s);

  isPalindrome(s);

  return 0;
}