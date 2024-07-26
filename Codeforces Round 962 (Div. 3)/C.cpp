// When i wrote this code, only me and God knew how it works. Now only God knows...
// NO LINK

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int len, q, i, j, count;
    cin >> len >> q;
    string a, b;
    cin >> a >> b;

    vector<vector<int>> a1(len + 1, vector<int>(26, 0));
    vector<vector<int>> a2(len + 1, vector<int>(26, 0));

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            a1[i + 1][j] = a1[i][j];
            a2[i + 1][j] = a2[i][j];
        }
        a1[i + 1][a[i] - 'a']++;
        a2[i + 1][b[i] - 'a']++;
    }

    while (q--)
    {
        count = 0;
        cin >> i >> j;

        vector<int> ac(26, 0);
        vector<int> bc(26, 0);
        for (int k = 0; k < 26; k++)
        {
            ac[k] = a1[j][k] - a1[i - 1][k];
            bc[k] = a2[j][k] - a2[i - 1][k];
        }

        for (int k = 0; k < 26; k++)
            count += abs(ac[k] - bc[k]);

        cout << count / 2 << endl;

    }
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}