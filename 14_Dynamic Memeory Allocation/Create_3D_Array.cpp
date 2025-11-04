#include <iostream>
using namespace std;

int main()
{
  int L, B, H;
  cout << "Enter number of layers (L), rows (B), columns (H): ";
  cin >> L >> B >> H;

  int ***ptr = new int **[L];

  for (int i = 0; i < L; i++)
  {
    ptr[i] = new int *[B];

    for (int j = 0; j < B; j++)
    {
      ptr[i][j] = new int[H];
    }
  }

  for (int i = 0; i < L; i++)
  {
    for (int j = 0; j < B; j++)
    {
      for (int k = 0; k < H; k++)
      {
        ptr[i][j][k] = i + j + k;
      }
    }
  }

  for (int i = 0; i < L; i++)
  {
    cout << "\nLayer " << i << ":\n";
    for (int j = 0; j < B; j++)
    {
      for (int k = 0; k < H; k++)
      {
        cout << ptr[i][j][k] << " ";
      }
      cout << endl;
    }
  }

  for (int i = 0; i < L; i++)
  {
    for (int j = 0; j < B; j++)
    {
      delete[] ptr[i][j]; // delete each row (1D array)
    }
    delete[] ptr[i]; // delete each 2D layer (array of int*)
  }
  delete[] ptr; // delete the array of layers (int**)
}