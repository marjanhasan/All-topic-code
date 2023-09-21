#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;
    long long int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    while (q--)
    {
        long long int x;
        cin >> x;
        bool flag = false;
        long long int l = 0, r = n - 1;
        while (l <= r)
        {
            long long int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            if (x > a[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }

        flag == true ? cout << "found\n" : cout << "not found\n";
    }
    return 0;
}
