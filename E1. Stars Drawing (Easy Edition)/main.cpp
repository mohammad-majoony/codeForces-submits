// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1015/E1

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
    int n, m;
    cin >> n >> m;
    string txt[n];

    for (int i{}; i < n; ++i)
        cin >> txt[i];

    int t[n][m], b[n][m], r[n][m], l[n][m];

    for (int i{}; i < n; ++i)
    {
        for (int j{}; j < m; ++j)
        {
            l[i][j] = t[i][j] = 0;
            if (txt[i][j] != '*')
                continue;
            l[i][j] = t[i][j] = 1;
            if (i)
                t[i][j] += t[i - 1][j];
            if (j)
                l[i][j] += l[i][j - 1];
        } 
    }

    for (int i{n - 1}; i >= 0; --i)
    {
        for (int j{m - 1}; j >= 0; --j)
        {
            r[i][j] = b[i][j] = 0;
            if (txt[i][j] != '*')
                continue;
            r[i][j] = b[i][j] = 1;
            if (i != n - 1)
                b[i][j] += b[i + 1][j];
            if (j != m - 1)
                r[i][j] += r[i][j + 1];
        } 
    }

    bool capture[n][m]{false}, res{true};
    memset(capture, false, sizeof capture);
    vector<tuple<int, int, int>> vec;

    for (int i{}; i < n; ++i)
    {
        for (int j{}; j < m; ++j)
        {
            int maxi = min({r[i][j], l[i][j], t[i][j], b[i][j]}), tmp;
            if (maxi > 1)
            {
                capture[i][j] = true;
                vec.push_back({i + 1, j + 1, maxi - 1});

                for (int k{1}; k < maxi; ++k)
                {
                    capture[i + k][j] = true;                   
                    capture[i - k][j] = true;                   
                    capture[i][j + k] = true;                   
                    capture[i][j - k] = true;                   
                }
            }
        } 
    }

    for (int i{}; i < n; ++i)
        for (int j{}; j < m; ++j)
            if (txt[i][j] == '*' && !capture[i][j])
                res = false;

    if (res)
    {
        cout << vec.size() << endl;
        for (auto nl: vec)
            cout << get<0>(nl) << " " << get<1>(nl) << " " << get<2>(nl) << endl;      
    }
    else
        cout << -1 << endl;
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