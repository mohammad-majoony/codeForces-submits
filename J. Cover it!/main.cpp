// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/ibNhxWfOek/contest/341360/problem/J

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
    int n, m, x, y, node; 
    cin >> n >> m;

    bool vis[n + 1], isOdd[n + 1];
    vector<int> ed[n + 1];
    vector<int> odd, even;

    memset(vis, false, sizeof vis);
    memset(isOdd, false, sizeof isOdd);


    for (int i{}; i < m; ++i)
    {
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }

    queue<int> qu;
    vis[1] = true;
    qu.push(1);
    even.push_back(1);

    while(!qu.empty())
    {
        node = qu.front();
        qu.pop();

        for (auto nei: ed[node])
        {
            if (!vis[nei])
            {
                vis[nei] = true;
                qu.push(nei);

                if (isOdd[node])
                   even.push_back(nei);
                else
                {
                   odd.push_back(nei);
                   isOdd[nei] = true; 
                }
            }
        }
    }

    if (odd.size() < even.size())
    {
        cout << odd.size() << endl;
        for (auto num: odd)
            cout << num << " ";
    } 
    else 
    {
        cout << even.size() << endl;
        for (auto num: even)
            cout << num << " ";
    }
    cout << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc ; cin >> tc; while(tc--)
    solve();
}