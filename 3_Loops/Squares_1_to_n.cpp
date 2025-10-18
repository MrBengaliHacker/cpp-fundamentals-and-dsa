#include<iostream>
using namespace std;

int main()
{
  int n;
  cout << "Up to which number do you want to square? ";
  cin >> n;

  for(int i = 1; i <= n; i++)
  {
    cout << i <<" Square is " << i * i << "\n";
  }
}