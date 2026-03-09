#include <iostream>
using namespace std;

// Pattern 6: Inverted Number Triangle
// Each row prints numbers from 1 to decreasing length

void pattern6(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= (n - i) + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    pattern6(n);

    return 0;
}
