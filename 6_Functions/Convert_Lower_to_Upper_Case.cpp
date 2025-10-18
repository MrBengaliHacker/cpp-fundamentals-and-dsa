#include <iostream>
using namespace std;

char convert(char name)
{
  if (name >= 'a' && name <= 'z')
    return name - 'a' + 'A';
  else
    return name;
}

int main()
{
  char name;

  cout << "Enter the alphabet in lowercase: ";
  cin >> name;

  if (name >= 'a' && name <= 'z')
  {
    cout << "Lowercase: " << name << endl;
    cout << "Uppercase: " << convert(name) << endl;
  }
  else
  {
    cout << "Invalid input. Please enter a lowercase letter (a-z)." << endl;
  }
}