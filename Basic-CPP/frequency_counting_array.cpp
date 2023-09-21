#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt[n + 1] = {0}; // frequency or counting array
    for (int i = 0; i < n; i++)
        cnt[a[i]]++; // array a of i er value hiseb kre cnt of i er value 1 baraitesi
    for (int i = 0; i < n + 1; i++)
        cout << cnt[i] << " ";
    return 0;
}
/*
input:
7
0 4 3 0 4 1 2

ouput:
2 1 1 1 2 0 0 0

1) n and array of n initialize and input
2) initialize cnt array of n+1 size
 and initial value will be zero in every indexes
3) run a loop from zero to less than n,
cnt[]++ for every a[i] value
4) print the cnt array
*/
