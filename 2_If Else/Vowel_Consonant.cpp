#include<iostream>
using namespace std;

int main()
{
  char letter;
  cout << "Enter your letter: ";
  cin >> letter;

  if(letter == 'a' || letter == 'A' ||
     letter == 'e' || letter == 'E' ||
     letter == 'i' || letter == 'I' ||
     letter == 'o' || letter == 'O' ||
     letter == 'u' || letter == 'U')
  {
    cout << letter << " is vowel.";
  }
  else
  {
    cout << letter << " is consonant.";
  }
}
