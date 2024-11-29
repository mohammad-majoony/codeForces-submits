// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/1144/problem/F

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

int const N = 2e5 + 5;
vector<int> ed[N];

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[m][2];

    for (int i{}; i < m; ++i)
    {
        cin >> arr[i][0] >> arr[i][1];
        ed[arr[i][0]].push_back(arr[i][1]);
        ed[arr[i][1]].push_back(arr[i][0]);
    }

    int color[N];     
    bool res{true};

    memset(color, -1, sizeof color);
    queue<int> qu;
    qu.push(1);
    color[1] = 0;

    while (!qu.empty())
    {
        int node = qu.front();
        qu.pop();

        for (auto nei : ed[node])
        {
            if (!~color[nei])
            {
                color[nei] = !color[node];
                qu.push(nei);
            }
            else if (color[nei] == color[node])
                res = false;
        }
    } 

    cout << ((res) ? "YES" : "NO") << endl;
    if (res)
    {
        for (auto pa: arr)
            cout << (color[pa[0]] < color[pa[1]]);
    }
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