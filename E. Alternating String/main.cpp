// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/2008/E

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

int const N = 2e5 + 1;
int const M = 27;

void solve()
{
    int len, ca{}, cb{}, mini{LLONG_MAX};;
    string t;
    vector<int> a(M, 0), b(M, 0);
    cin >> len >> t;

    for (int i{}; i < len; ++i)
    {
        if (i % 2)
            a[t[i] - 'a']++;
        else
            b[t[i] - 'a']++;
    }

    if (len % 2 == 0)
        mini = len - *max_element(a.begin(), a.end()) - *max_element(b.begin(), b.end());

    if (len % 2)
    {
        for (int i{}; i < len; i++)
        {
            if (i % 2)
            {
                a[t[i] - 'a']--;
                mini = min(mini, len - *max_element(a.begin(), a.end()) - *max_element(b.begin(), b.end()));
                b[t[i] - 'a']++;
            }
            else
            {
                b[t[i] - 'a']--;
                mini = min(mini, len - *max_element(a.begin(), a.end()) - *max_element(b.begin(), b.end()));
                a[t[i] - 'a']++;
            }
        }
    }

    cout << mini << endl;
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