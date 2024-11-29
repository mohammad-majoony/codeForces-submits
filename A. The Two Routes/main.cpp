// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/group/ibNhxWfOek/contest/341366/problem/A

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

int const N = 4e2 + 5;
bool adj_list[N][N];
int val[2][N];
int n;

void bfs(bool rail)
{
    queue<int> qu;
    qu.push(1);
    val[rail][1] = 0;

    while (!qu.empty()) 
    {
        int node = qu.front();
        qu.pop();

        for (int i{1}; i <= n; ++i)
        {
            if (adj_list[node][i] == rail && (val[rail][i] > 1 + val[rail][node] || !~val[rail][i]))
            {
                qu.push(i);
                val[rail][i] = 1 + val[rail][node];
            }
        }
    }
}

void solve()
{
    int m, x, y;
    cin >> n >> m;

    memset(adj_list, false, sizeof adj_list);
    memset(val, -1, sizeof val);

    for (int i{}; i < m; ++i)
    {
        cin >> x >> y;
        adj_list[x][y] = true;
        adj_list[y][x] = true;
    }

    bfs(false), bfs(true);

    if (!~val[false][n] || !~val[true][n])
        cout << -1 << endl;
    else 
        cout << max(val[false][n], val[true][n]) << endl;
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