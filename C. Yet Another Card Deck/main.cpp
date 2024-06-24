// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1511/C

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

void solve()
{
    int n, q, num, p;
    cin >> n >> q;
    map<int, int> ind;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (!ind.count(num))
            ind[num] = i + 1;
    }
    for (int i = 0; i < q; i++)
    {
        cin >> num;
        p = ind[num];
        for (auto i : ind)
            if (i.first != num && i.second < p)
                ind[i.first]++;
        ind[num] = 1 ;
        cout << p << " " ;
    }

}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc ; while(tc--)
    solve();
}