// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1433/D

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
    int n;
    cin >> n;

    pair<int, int> arr[n];
    for (int i{}; i < n; ++i)
    {
        cin >> arr[i].first; 
        arr[i].second = i + 1;
    }
    sort(arr, arr + n);

    if (arr[0].first != arr[n - 1].first)
    {
        cout << "YES" << endl;
        int ind;
        for (int i{1}; i < n; ++i)
        {
            if (arr[i].first != arr[i - 1].first)
            {
                ind = i - 1;
                break;
            }
        }

        for (int i{ind + 1}; i < n; ++i)
            cout << arr[ind].second << " " << arr[i].second << endl;

        for (int i{ind - 1}; i >= 0; --i)
            cout << arr[n - 1].second << " " << arr[i].second << endl;

    }
    else 
        cout << "NO" << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc ; cin >> tc; while(tc--)
    solve();
}