
#include <bits/stdc++.h>
using namespace std;

/* if the next element of array is less than curr element of array then we have to equal both of the value like said in question that  "every element is at least as large as the previous element". and we also have to count the moves.

1) If we subtract the next element value from the curr element we get the number of moves. 

2) Next we have to update the value of next index element of array so that
both current and previous index value is equal */

void solution()
{
    long long int moves = 0, q = 0, n;
    cin >> n;
    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            moves += (arr[i] - arr[i + 1]);
            q = arr[i] - arr[i + 1];
            arr[i + 1] = arr[i + 1] + q;
        }
    }

    cout << moves;
}


int main()
{
    solution();
    return 0;
}
