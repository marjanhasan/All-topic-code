#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = n - 1;
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
            cout << " ";
        for (int j = 1; j <= k; j++)
            cout << "*";
        s--;
        k += 2;
        cout << endl;
    }
    cout << "\nulta ta next\n\n";

    s = 0;
    k = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
            cout << " ";
        for (int j = 1; j <= k; j++)
            cout << "*";
        cout << endl;
        s++;
        k -= 2;
    }
    return 0;
}
