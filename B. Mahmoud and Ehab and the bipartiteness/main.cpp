// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/862/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define endl '\n'
#define int long long
using namespace std;

const int N{100005};
map<int, vector<int>> nei;
int vis[N]{0};
int con[N]{0};
int one = 0, two = 0;

void bipartite(int node, int parent)
{
    vis[node] = 3 - vis[parent];
    if (vis[node] == 1)
        one++;
    else
        two++;
    for (auto n : nei[node])
    {
        if (!vis[n])
        {
            con[n]++;
            bipartite(n, node);
            con[node]++;
        }
    }
}

void solve()
{
    int v, e, x, y, res = 0;
    cin >> e;
    for (int i = 0; i < e - 1; i++)
    {
        cin >> x >> y;
        nei[x].push_back(y);
        nei[y].push_back(x);
    }
    vis[0] = 2;
    bipartite(1, 0);
    v = e;
    for (int i = 1; i <= v; i++)
    {
        if (vis[i] == 1)
            res += two - con[i];
    }
    cout << res;
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