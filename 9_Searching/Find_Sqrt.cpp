#include <iostream>
using namespace std;

// Function to find integer square root using binary search
int mySqrt(int x)
{
  if (x < 2)
    return x; // sqrt(0)=0, sqrt(1)=1

  int start = 1, end = x / 2; // Square root of x is at most x/2 for x > 1
  int ans = 0;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

     // Check if mid*mid <= x safely using division to prevent overflow
    if (mid <= x / mid)
    {                  
      ans = mid;       // store possible answer
      start = mid + 1; // try to find larger mid
    }
    else
    {
      end = mid - 1; // mid*mid > x, go left
    }
  }

  return ans;
}

int main()
{
  int x;
  cout << "Enter a number: ";
  cin >> x;

  int result = mySqrt(x);

  cout << "The integer square root of " << x << " is " << result << "." << endl;

  return 0;
}
