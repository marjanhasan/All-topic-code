#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 1;
    for (int i = 1; i <= n; i++) // n ta line
    {
        for (int j = 1; j <= k; j++) // k ta *
        {
            cout << "* ";
        }
        k++;
        cout << endl;
    }
    cout << "\nnew style\n\n";
    k = 4;
    for (int i = 1; i <= n; i++) // n ta line
    {
        for (int j = 1; j <= k; j++) // k ta *
        {
            cout << "* ";
        }
        k--;
        cout << endl;
    }
    return 0;
}

/*
input:
4
output:
*
* *
* * *
* * * *

new style

* * * *
* * *
* *
*

*/
