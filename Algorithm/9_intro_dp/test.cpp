#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int dp[N];
int sol(int i)
{
    if (i == 1)
        return 0;
    if (i == 2)
        return dp[i] = abs(a[i] - a[i - 1]);
    if (dp[i] != -1)
        return dp[i];
    return dp[i] = min(sol(i - 1) + abs(a[i] - a[i - 1]), sol(i - 2) + abs(a[i] - a[i - 2]));
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
        dp[i] = -1;
    }
    cout << sol(n);

    return 0;
}
