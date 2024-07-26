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
    string txt;
    cin >> txt;

    int len = txt.size();
    vector<int> prefixSum(len + 1);
    vector<int> count(2 * len + 2);

    for (int i = 0; i < len; i++)
        prefixSum[i + 1] = prefixSum[i] + (txt[i] == '1' ? 1 : -1);

    for (int i = 0; i < 2 * len + 2; i++)
        count[i] = 0;

    int ans = 0;
    for (int j = 1; j <= len; j++)
    {
        count[prefixSum[j - 1] + len] += j;
        ans = MOD((ans + (int)count[prefixSum[j] + len] * (len - j + 1)));
    }

    cout << ans << endl;
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