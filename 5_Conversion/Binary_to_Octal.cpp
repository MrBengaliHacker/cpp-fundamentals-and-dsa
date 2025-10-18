#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

int main()
{
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  cout<<"Binary number: "<<num<<endl;

  int rem, decimal = 0, mul = 1;
  
  // Convert binary to decimal
  int temp = num;
  while(temp > 0)
  {
    rem = temp % 10;
    temp = temp / 10;
    decimal = rem * mul + decimal;
    mul = mul * 2;
  }

  // Convert decimal to octal
  int octal = 0, place = 1;
  while(decimal > 0)
  {
    rem = decimal % 8;
    decimal = decimal / 8;
    octal = rem * place + octal;
    place = place * 10;
  }
  cout<<"Octal number: "<<octal<<endl;
}