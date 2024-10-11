// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/687/A

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
    int len, m, x, y;
    cin >> len >> m;

    vector<int> ed[len + 1];
    for (int i{}; i < m; ++i)
    {
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }

    int vis[len + 1], ind{1};
    memset(vis, false, sizeof vis);
    bool res{true};

    unordered_map<int, int> gr;
    vector<int> a, b;

    queue<int> qu;
    while (true)
    {
        int first{};
        for (; ind <= len; ++ind)
        {
            if (!vis[ind] && ed[ind].size())
            {
                first = ind;
                break;
            }
        }

        if (!first)
            break;

        qu.push(first);
        gr[first] = 1;
        a.push_back(first);
        vis[first] = true;

        while (!qu.empty())
        {
            int node = qu.front();
            qu.pop();

            for (auto nei : ed[node])
            {
                if (!vis[nei])
                {
                    if (gr[node] == 1)
                    {
                        gr[nei] = 2;
                        b.push_back(nei);
                    }
                    else
                    {
                        gr[nei] = 1;
                        a.push_back(nei);
                    }
                    vis[nei] = true;
                    qu.push(nei);
                }
                else
                {
                    if (gr[nei] == gr[node])
                        res = false;
                }
            }
        }
    }

    if (res)
    {
        cout << a.size() << endl;
        for (auto num : a)
            cout << num << " ";
        cout << endl;
        cout << b.size() << endl;
        for (auto num : b)
            cout << num << " ";
        return;
    }
    cout << -1;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    solve();
}