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

void maxSumIndex(int arr[][100], int row, int col, int &maxSum, int &index)
{
  maxSum = INT_MIN;
  index = -1;

  for (int i = 0; i < row; i++)
  {
    int total = 0;

    for (int j = 0; j < col; j++)
    {
      total += arr[i][j];

      if (total > maxSum)
      {
        maxSum = total;
        index = i;
      }
    }
  }
}

void printMatrix(int arr[][100], int row, int col, int maxSum, int index)
{
  cout << "\nYour Matrix is: \n";
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << "\nThe row with the maximum sum is at index: " << index << endl;
  cout << "The maximum sum of this row is: " << maxSum << endl;
}

int main()
{
  int arr[100][100], row, col;
  int maxSum, index;

  inputMatrix(arr, row, col);
  maxSumIndex(arr, row, col, maxSum, index);
  printMatrix(arr, row, col, maxSum, index);

  return 0;
}