#include <iostream>
#include <climits>
using namespace std;

void inputMatrix(int arr[][100], int &row, int &col)
{
  cout << "Enter number of rows: ";
  cin >> row;
  cout << "Enter number of columns: ";
  cin >> col;

  // Edge case check for empty matrix (rows or columns being zero)
  if (row != col)
  {
    cout << "Matrix dimensions must be the same (square matrix required).\n";
    exit(1); // Exit the program if invalid matrix size
  }

  cout << "Enter Matrix elements: \n";
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }
}

void diagonalSum(int arr[][100], int row, int col)
{
  int first = 0, second = 0;

  for (int i = 0; i < row; i++)
  {
    first += arr[i][i];
    second += arr[i][col - 1 - i];
  }

  cout << "First diagonal sum is: " << first << endl;
  cout << "Second diagonal sum is: " << second << endl;
}

int main()
{
  int arr[100][100], row, col;

  inputMatrix(arr, row, col);
  diagonalSum(arr, row, col);

  return 0;
}