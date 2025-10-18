#include <iostream>
using namespace std;

int digit(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}

bool armstrong(int n, int count)
{
    int num = n, rem, result = 0;
    
    while (num)
    {
        rem = num % 10;
        num /= 10;

        // Calculate rem^count
        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= rem;
        }

        result += power;
    }
    
    return result == n;  // Compare the result with the original 'n'
}

int main()
{
    int num;

    cout << "Enter the number: ";
    cin >> num;  

    int count = digit(num);  

    if (armstrong(num, count))  // Check if Armstrong number
    {
        cout << "The number " << num << " is an Armstrong number." << endl;
    }
    else
    {
        cout << "The number " << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
