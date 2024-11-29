// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/2028/problem/C

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
    int len, m, v, last{}, count{}, befor{}, maxi{}, sums{}, maxCount{};
    bool flag{false};

    cin >> len >> m >> v;

    int arr[len], r[len + 1], l[len + 1], sumr[len], suml[len];
    memset(l, -1, sizeof l);
    memset(r, -1, sizeof r);
    r[0] = -1, l[0] = len;

    for (int i{}; i < len; ++i)
    {
        cin >> arr[i];
        last += arr[i];
        sums += arr[i];

        suml[i] = arr[i] + befor;
        befor += arr[i];

        if (last >= v)
        {
            last = 0;
            count++;
            l[count] = i;

            maxCount = max({maxCount, count});
            if (count >= m)
                flag = true;
        }
    }

    last = befor = count = 0;
    for (int i{len - 1}; i >= 0; --i)
    {
        last += arr[i];

        sumr[i] = arr[i] + befor;
        befor += arr[i];

        if (last >= v)
        {
            last = 0;
            count++;
            r[count] = i;

            if (count >= m)
            {
                maxCount = max({maxCount, count});
                flag = true;
            }
            if (~l[m - count] && l[m - count] < i)
            {
                maxCount = max({maxCount, m});
                flag = true;
            }
        }
    }

    if (maxCount < m)
    {
        cout << -1 << endl;
        return;
    }

    maxi = max({sums - suml[l[m]], sums - sumr[r[m]]});
    for (int i{1}; i < m; ++i)
        maxi = max(maxi, sums - suml[l[i]] - sumr[r[m - i]]);

    cout << maxi << endl;
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