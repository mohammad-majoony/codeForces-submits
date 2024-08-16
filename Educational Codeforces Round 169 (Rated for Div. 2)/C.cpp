// When i wrote this code, only me and God knew how it works. Now only God knows...
// NO LINK

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
    int len, k;
    cin >> len >> k;
    int arr[len];

    for (int i{}; i < len; ++i)
        cin >> arr[i];

    sort(arr, arr + len, [](auto n1, auto n2){
        return n1 > n2;
    });

    for (int i{}; i < len; ++i)
    {
        if (k == 0 || i == len - 1)
            break;
        int r = min(arr[i] - arr[i + 1], k);
        arr[i + 1] += r;
        k -= r;
        i++;
    }
    int o{}, e{};
    for (int i = 0; i < len; i++)
    {
        if (i % 2)
            o += arr[i];
        else
            e += arr[i];
    }
    cout << abs(o - e) << endl;
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