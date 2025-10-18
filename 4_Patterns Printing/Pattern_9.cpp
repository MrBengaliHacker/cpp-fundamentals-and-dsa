#include <iostream>
using namespace std;

int main()
{
  int count = 1;
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      cout << count << " ";
      count = count + 1;
    }
    cout << endl;
  }
}

/* #include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      cout << (i - 1) * 5 + j<< " ";
    }
    cout << endl;
  }
} */