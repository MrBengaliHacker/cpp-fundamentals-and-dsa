#include <iostream>
using namespace std;

void inputMatrix(int arr[][100], int &row, int &col)
{
  cout << "Enter number of rows: ";
  cin >> row;
  cout << "Enter number of columns: ";
  cin >> col;

  // Edge case check for empty matrix (rows or columns being zero)
  if (row <= 0 || col <= 0)
  {
    cout << "Matrix dimensions must be greater than zero.\n";
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

void printMatrix(int arr[][100], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

void reverseRow(int arr[][100], int row, int col)
{
  // Print the original matrix
  cout << "\nOriginal Matrix:\n";
  printMatrix(arr, row, col);

  // Reverse each row
  for (int i = 0; i < row; i++)
  {
    int start = 0, end = col - 1;

    while (start < end)
    {
      swap(arr[i][start], arr[i][end]);
      start++;
      end--;
    }
  }

  // Print the reversed matrix
  cout << "\nMatrix after reversing each row:\n";
  printMatrix(arr, row, col);
}

int main()
{
  int arr[100][100], row, col;

  inputMatrix(arr, row, col);
  reverseRow(arr, row, col);

  return 0;
}