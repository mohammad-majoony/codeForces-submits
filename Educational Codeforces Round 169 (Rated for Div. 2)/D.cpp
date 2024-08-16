// When i wrote this code, only me and God knew how it works. Now only God knows...
// NO LINK

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> c_set;

void solve()
{
    int len, q;
    cin >> len >> q;

    vector<string> p(len + 1);
    map<char, vector<int>> c;

    for (int i{1}; i <= len; ++i)
    {
        cin >> p[i];
        c[p[i][0]].push_back(i);
        c[p[i][1]].push_back(i);
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        if (x == y)
        {
            cout << 0 << endl;
            continue;
        }

        vector<int> dist(len + 1, LLONG_MAX);
        queue<int> qu;
        qu.push(x);
        dist[x] = 0;

        while (!qu.empty())
        {
            int cu = qu.front();
            qu.pop();

            for (char color : p[cu])
            {
                for (int n : c[color])
                {
                    if (dist[n] > dist[cu] + abs(cu - n))
                    {
                        dist[n] = dist[cu] + abs(cu - n);
                        qu.push(n);
                    }
                }
            }
        }
        cout << ((dist[y] == LLONG_MAX) ? -1 : dist[y]) << endl;
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