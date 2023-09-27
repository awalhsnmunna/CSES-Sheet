#include <bits/stdc++.h>
using namespace std;


// We know that the sum of the first n natural numbers formula is NSum = n*(n+1)/2;
//We can see from the question that in the array/vector from n natural numbers, one number is missing. 
// So, if we sum the numbers in vector and subtract from the NSum, we will get the missing number.

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
