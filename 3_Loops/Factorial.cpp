#include<iostream>
using namespace std;

int main()
{
  int n, fact = 1;
  cout<<"Enter the number: ";
  cin>>n;

  if(n < 0) {
    cout << "Factorial is not defined for negative numbers." << endl;
  } else {
    for(int i = n; i >= 1; i--)  // for(int i = 1; i <= n; i++ ) is also work
    {
      fact = fact * i;
    }
    cout<<"The factorial is: "<<fact<<endl;
  }
}