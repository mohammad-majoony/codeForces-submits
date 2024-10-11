// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/ibNhxWfOek/contest/341359/problem/A

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

int const N = 1e5 + 5;
bool vis[N]{false};
vector<int> ed[N];
int cycle{};

void dfs(int cu, int par)
{
    vis[cu] = true;
    for (auto nei : ed[cu])
    {
        if (!vis[nei])
            dfs(nei, cu);
        else if (nei != par)
            cycle++;
    }
}

void solve()
{
    int n, m, x, y;
    cin >> n >> m;

    for (int i{}; i < m; ++i)
    {
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }

    dfs(1, 0);

    vector<int> allsize;
    set<int> un;

    for (int i{1}; i <= n; ++i)
    {
        allsize.push_back(ed[i].size());
        un.insert(ed[i].size());
    }
    sort(allsize.begin(), allsize.end());

    if (cycle)
    {
        if (cycle == 2 && un.size() == 1 && allsize[0] == 2)
        {
            cout << "ring topology";
            return;
        }
        cout << "unknown topology";
        return;
    }
    else if (un.size() == 2)
    {
        bool res{true};

        for (int i{}; i < n; ++i)
        {
            if (i != n - 1)
            {
                if (allsize[i] != 1)
                    res = false;
            }
            else if (i == n - 1)
            {
                if (allsize[i] != n - 1)
                    res = false;
            }
            else
                res = false;
        }

        if (res)
        {
            cout << "star topology";
            return;
        }

        res = true;

        for (int i{}; i < n; ++i)
        {
            if (i < 2)
            {
                if (allsize[i] != 1)
                    res = false;
            }
            else if (i >= 2)
            {
                if (allsize[i] != 2)
                    res = false;
            }
            else
                res = false;
        }

        if (res)
        {
            cout << "bus topology";
            return;
        }
    }

    cout << "unknown topology";
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    solve();
}