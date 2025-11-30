#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height){
  int n = height.size();

  if(n == 0) return 0;

  int leftmax = 0, rightmax = 0, maxheight = height[0], index = 0, water = 0;

  // Maximum height buiding find
  for(int i = 1; i < n; i++){
    if(maxheight < height[i]){
      maxheight = height[i];
      index = i;
    }
  }

  // Left side
  for(int i = 0; i < index; i++){
    if(leftmax > height[i]) water += leftmax - height[i];
    else leftmax = height[i];
  }

  // Right side
  for(int i = n - 1; i > index; i--){
    if(rightmax > height[i]) water += rightmax - height[i];
    else rightmax = height[i];
  }

  return water;
}

int main()
{
  int n;

  cout << "Enter array size: ";
  cin >> n;

  vector<int> height(n);
  cout << "Enter array elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> height[i];
  }
  cout << endl;

  cout << "You entered: ";
  for (int i = 0; i < n; i++)
  {
    cout << height[i] << " ";
  }
  cout << endl;

  cout << "Trapped Rain Water: " << trap(height) << endl;
}
