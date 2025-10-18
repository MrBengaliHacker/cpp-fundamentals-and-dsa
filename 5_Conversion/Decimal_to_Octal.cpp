#include<iostream>
using namespace std;

int main()
{
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  cout<<"Decimal number: "<<num<<endl;

  int rem, ans = 0, mul = 1;
  
  while(num > 0)
  {
    rem = num % 8;
    num = num / 8;
    ans = rem * mul + ans;
    mul = mul * 10;
  }
  cout<<"Octal number: "<<ans<<endl;
}