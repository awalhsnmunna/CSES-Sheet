#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum = 0;
    cin >> n;
    vector<int> v;
    
    //We have to take input (n-1) numbers because one number is missing 
    for (int i = 0; i < n-1; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
     //We also have to traverse the vector (n-1) times because (n-1) numbers exist in vector 
    for (int i = 0; i < n-1; i++)
    {
        sum += v[i];
    }

    int AllNumSum = n * (n + 1) / 2;

    int ans = AllNumSum - sum;

    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}
