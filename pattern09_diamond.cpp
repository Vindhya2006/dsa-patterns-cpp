#include <iostream>
using namespace std;

// Pattern 9: Diamond Star Pattern
// Prints a diamond shape using stars

void pattern9(int n)
{
    // Upper pyramid
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
            cout << " ";

        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*";

        cout << endl;
    }

    // Lower inverted pyramid
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j > i; j--)
            cout << " ";

        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*";

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    pattern9(n);

    return 0;
}
