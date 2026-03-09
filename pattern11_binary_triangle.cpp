#include <iostream>
using namespace std;

// Pattern 11: Binary Number Triangle
// Alternating 1 and 0 pattern in triangle form

void pattern11(int n)
{
    int start = 1;

    for(int i = 1; i <= n; i++)
    {
        // decide starting value of row
        if(i % 2 == 0)
            start = 0;
        else
            start = 1;

        for(int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;   // toggle between 0 and 1
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    pattern11(n);

    return 0;
}
