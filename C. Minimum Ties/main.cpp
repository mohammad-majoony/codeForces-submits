// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1487/C

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
    int len;
    cin >> len;
    unordered_map<int, int> w, l, t;
    if (len % 2)
    {
        for (int i{1}; i < len; ++i)
        {
            for (int j{i + 1}; j <= len; ++j)
            {
                if (w[i] == l[i])
                {
                    if (w[j] < l[j])
                    {
                        cout << "-1 ";
                        w[j]++;
                        l[i]++;
                    }
                    else
                    {
                        cout << "1 ";
                        w[i]++;
                        l[j]++;
                    }
                }
                else if (w[i] < l[i])
                {
                    cout << "1 ";
                    w[i]++;
                    l[j]++;
                }
                else
                {
                    cout << "-1 ";
                    w[j]++;
                    l[i]++;
                }
            }
        }
        cout << endl;
    }
    else
    {
        for (int i{1}; i < len; ++i)
        {
            for (int j{i + 1}; j <= len; ++j)
            {
                if (i % 2 && i + 1 == j)
                    cout << "0 ";
                else if (w[i] == l[i])
                {
                    if (w[j] < l[j])
                    {
                        cout << "-1 ";
                        w[j]++;
                        l[i]++;
                    }
                    else
                    {
                        cout << "1 ";
                        w[i]++;
                        l[j]++;
                    }
                }
                else if (w[i] < l[i])
                {
                    cout << "1 ";
                    w[i]++;
                    l[j]++;
                }
                else
                {
                    cout << "-1 ";
                    w[j]++;
                    l[i]++;
                }
            }
        }
        cout << endl;
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