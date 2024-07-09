// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1905/B

#include <bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

map<int, vector<int>> tree;
int c;
bool add;

void dfs(int node, int par)
{
    bool one_free = {true};
    for (auto child : tree[node])
    {
        if (child == par)
            continue;

        if (!one_free)
        {
            if (add)
                c++;
            add = add ? false : true;
            
        }

        one_free = false;
        dfs(child, node);
    }
}

void solve()
{
    add = true;
    c = 1;
    tree.clear();
    int len, x, y;
    cin >> len;
    for (int i = 0; i < len - 1; i++)
    {
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    for (int i = 1; i <= len; i++)
    {
        if (tree[i].size() == 1)
        {
            dfs(i, 0);  
            break;
        }
    }

    cout << c << endl;
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