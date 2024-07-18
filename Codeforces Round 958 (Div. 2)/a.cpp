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
    int len, add;
    cin >> len >> add;
    if (len == 1) 
    {
        cout << 0 << endl;
        return;
    }

    if (add >= len)
    {
        cout << 1 << endl;
        return;
    }

    int c{1};
    int k = len;
    int pr{};
    while (c < len)
    {
        pr++;
        c += add - 1;
        k -= add - 1;
    }
    cout << pr << endl;

}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc ; cin >> tc; while(tc--)
    solve();
}