#include <iostream>
using namespace std;

void LowertoUpper(string &s, int index)
{

  if (index < 0)
    return;

  if (s[index] >= 'a' && s[index] <= 'z')
    s[index] = 'A' + s[index] - 'a';

  LowertoUpper(s, index - 1);
}

int main()
{
  string s;

  cout << "Enter a string: ";
  getline(cin, s);

  LowertoUpper(s, s.length() - 1);
  cout << "Uppercase String: " << s << endl;
  
}
