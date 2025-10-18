#include <iostream>
using namespace std;

int main()
{
  int num, power, result = 1;
  cout << "Enter the number: ";
  cin >> num;
  cout << "Enter the power: ";
  cin >> power;

  if (power < 0)
  {
    cout << "Enter positive power." << endl;
    return 1;
  }
  for (int i = 1; i <= power; i++)
  {

    result = result * num;
  }
  cout << "Result: " << result <<endl;
}