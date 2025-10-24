#include <iostream>
using namespace std;

// Input function
void printArray(int arr[], int &n)
{
    cout << "Enter Array Size: ";
    cin >> n;

    cout << "Enter Array Elements (sorted): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

// Function to find the first occurrence of key
int firstOccurrence(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;       // potential answer
            end = mid - 1;   // look left for earlier occurrence
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

// Function to find the last occurrence of key
int lastOccurrence(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;       // potential answer
            start = mid + 1; // look right for later occurrence
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int n, arr[1000];
    printArray(arr, n);

    int key;
    cout << "Enter The Key: ";
    cin >> key;

    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);

    if (first == -1)
    {
        cout << "Element not found in the array." << endl;
    }
    else
    {
        cout << "First Occurrence: " << first << endl;
        cout << "Last Occurrence: " << last << endl;
        cout << "Total Count: " << (last - first + 1) << endl;
    }

    return 0;
}
