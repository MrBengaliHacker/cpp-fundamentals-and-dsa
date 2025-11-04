#include <iostream>
using namespace std;

int main()
{
  // First we create an array that store adress
  int n, m; // n = rows & m = columns
  cout << "Enter number of rows and columns: ";
  cin >> n >> m;

  int **ptr = new int *[n];

  // Created 2D Array
  for (int i = 0; i < n; i++)
  {
    ptr[i] = new int[m];
  }

  // Input value from user
  cout << "Enter elements:\n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> ptr[i][j];
    }
  }

  // Print values
  cout << "\nMatrix:\n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << ptr[i][j] << " ";
    }
    cout << endl;
  }

  // Release memory from heap
  for (int i = 0; i < n; i++)
  {
    delete[] ptr[i];
  }
  delete[] ptr;
}