#include <bits/stdc++.h>
using namespace std;

void solution()    
{       
    long long n;   
    cin >> n;
    cout << n << " ";

    // The loop will break until n beacome 1
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
    solution();
    return 0;
}
