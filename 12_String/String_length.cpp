#include <iostream>
using namespace std;

int manualLength(string s)
{
  int size = 0;

  while (size < s.size())
  {
    size++;
  }
  return size;
}

int main()
{
  string s;

  cout << "Enter a string: ";
  getline(cin, s);

    cout << "Fast length (using .size()): " << s.size() << endl;

    cout << "Manual length (using while loop): " << manualLength(s) << endl;


  return 0;
}