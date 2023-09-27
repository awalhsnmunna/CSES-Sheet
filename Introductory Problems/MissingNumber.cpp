#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    cout << n << " ";

    while (n != 1)
    {
        // if n is even, the algorithm divides it by two
        if (n % 2 == 0)
        {
            n /= 2;
        }
        // if n is odd, the algorithm multiplies it by three and adds one
        else
        {
            n *= 3;
            n++;
        }
        cout << n << " ";
    }
}

int main()
{
    solve();
    return 0;
}
