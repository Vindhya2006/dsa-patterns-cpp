#include <iostream>
using namespace std;

// Pattern 3: Increasing Number Triangle
// Time Complexity: O(n^2)

void pattern3(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
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

    pattern3(n);

    return 0;
}
