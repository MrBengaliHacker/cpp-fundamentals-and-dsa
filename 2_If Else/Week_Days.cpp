#include<iostream>
using namespace std;

int main()
{
  int num;
  cout<<"Enter number (1 - 7): ";
  cin>>num;

  if(num == 1)
  {
    cout<<"Monday";
  }
  else if(num == 2)
  {
    cout<<"Tuesday";
  }
  else if(num == 3)
  {
    cout<<"Wednesday";
  }
  else if(num == 4)
  {
    cout<<"Thursday";
  }
  else if(num == 5)
  {
    cout<<"Friday";
  }
  else if(num == 6)
  {
    cout<<"Saturday";
  }
  else if(num == 7)
  {
    cout<<"Sunday";
  }
  else
  {
    cout<<"You enter wrong number.";
  }
}