#include<iostream>
using namespace std;

int main()
{
  int marks;
  cout<<"Enter your marks: ";
  cin>>marks;

  if(marks >= 40)
  {
    cout<<"Congratulations! You passed the exam.";
  }
  else
  {
    cout<<"Unfortunately, you failed the exam.";
  }
}
