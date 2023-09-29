#include <bits/stdc++.h>
using namespace std;

void solution()
{
    long long int row, col, ans;
    cin >> row >> col;

    if (row > col)
    {
        if (row % 2 == 0)
        {
            ans = (row * row) - (col - 1);
            cout << ans << endl;
        }
        else
        {
            ans = (((row - 1) * (row - 1) + 1)) + (col - 1);
            cout << ans << endl;
        }
    }
    else
    {
        if (col % 2 == 0)
        {
            ans = (col - 1) * (col - 1) + 1 + (row - 1);
            cout << ans << endl;
        }
        else
        {
            ans = (col) * (col) - (row - 1);
            cout << ans << endl;
        }
    }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
