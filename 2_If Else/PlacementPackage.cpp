#include <iostream>
using namespace std;

int main()
{
  int package;
  cout << "What Year Package you provide?\n";
  cin >> package;
  if (package >= 2500000)
  {
    cout << "I accept this offer.";
  }
  else
  {
    cout << "I reject this offer.";
  }
}
