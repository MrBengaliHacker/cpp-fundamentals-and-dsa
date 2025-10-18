#include<iostream>
using namespace std;

int main()
{
  int num;
  cout<<"Enter your number: ";
  cin>>num;

  if(num%2==0)
  {
    cout<<""<<num<<" is even number.";
  }
  else
  {
    cout<<""<<num<<" is odd number.";
  }
}