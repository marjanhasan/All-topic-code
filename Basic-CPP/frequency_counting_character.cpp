#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size(), cnt[26] = {0};
    for (int i = 0; i < n; i++)
        cnt[s[i] - 'a']++;

    // frequency array print
    /* for (int i = 0; i < 26; i++)
    {
        char ch = i + 'a';
        if (cnt[i] != 0)
            cout << ch << " " << cnt[i] << endl;
    } */

    // given string
    for (int i = 0; i < n; i++)
    {
        int val = s[i] - 'a';
        if (cnt[val] != 0)
            cout << s[i] << " " << cnt[val] << endl;
        cnt[val] = 0;
    }
    return 0;
}
