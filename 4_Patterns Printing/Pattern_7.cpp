#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 5; i++)
  {
    char name = 'a' + (i-1);
    for (int j = 0; j <= 5; j++)
    {
      cout << name << " ";
    }
    cout << endl;
  }
}