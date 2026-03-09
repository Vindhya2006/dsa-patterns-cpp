#include <iostream>
using namespace std;

// Pattern 8: Inverted Star Pyramid
// Prints an inverted centered pyramid of stars

void pattern8(int n)
{
    for(int i = 0; i < n; i++)
    {
        // spaces
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars
        for(int j = 0; j < (2 * n) - (2 * i + 1); j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    pattern8(n);

    return 0;
}
