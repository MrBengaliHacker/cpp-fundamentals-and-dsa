#include <iostream>
using namespace std;

int vowelCount(string s, int index)
{
  if (index == -1)
    return 0;

  if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u' ||
      s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U')
  {
    return 1 + vowelCount(s, index - 1);
  }
  else
    return vowelCount(s, index - 1);
}

int main()
{
  string s;

  cout << "Enter a string: ";
  getline(cin, s);

  int index = s.length() - 1;
  cout << "Number of vowels: " << vowelCount(s, index) << endl;
}