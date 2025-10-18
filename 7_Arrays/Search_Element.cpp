#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[5] = {4, 8, 12, 16, 20};
  int x;

  cout<<"Enter Element: ";
  cin>>x;

  int index = -1;

  for(int i = 0; i < 5; i++)
  {
    if(arr[i] == x)
    {
      index = i;
    }
  }
  cout<<"Index: "<<index;
}