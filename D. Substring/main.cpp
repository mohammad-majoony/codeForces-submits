// When i wrote this code, only me and God knew how it works. Now only God knows...
// NO LINKhttps://codeforces.com/problemset/problem/919/D

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

int const N = 3e5 + 5;
int maxi = 0;
vector<int> edge[N];
bool findCycle{false};
string txt;

// 0 not visited, 1 being explored, 2 fully explored
int vis[N]{};
int c[N][26];

void dfs(int cu)
{
    for (auto e : edge[cu])
    {
        if (!vis[e])
        {
            vis[e] = 1;
            dfs(e);
        }
        else if (vis[e] == 1)
        {
            findCycle = true;
            return;
        }

        for (int i{}; i < 26; ++i)
        {
            c[cu][i] = max(c[cu][i], c[e][i]);
            maxi = max(maxi, c[cu][i]);
        }
    }
    vis[cu] = 2;
    c[cu][txt[cu - 1] - 'a']++;
    maxi = max(maxi, c[cu][txt[cu - 1] - 'a']);
}

void solve()
{
    int v, e, x, y;
    cin >> v >> e >> txt;
    for (int i{}; i < e; ++i)
    {
        cin >> x >> y;
        edge[x].push_back(y);
    }
    memset(c, 0, sizeof c);

    for (int i{1}; i <= v; ++i)
    {
        if (!vis[i])
            dfs(i);
    }

    if (findCycle)
        cout << -1;
    else
        cout << maxi;
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