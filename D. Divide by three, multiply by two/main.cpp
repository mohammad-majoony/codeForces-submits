// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/977/D

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
    int div3[len];
    pair<int, int> arr[len];

    for (int i{}; i < len; ++i)
    {
        cin >> arr[i].first;
        arr[i].second = i; 
    }

    for (int i{}; i < len; ++i)
    {
        int count{}, num = arr[i].first;
        while (num % 3 == 0)
        {
            num /= 3;
            count++;
        }
        div3[arr[i].second] = count;
    }

    sort(arr, arr + len, [&div3](auto n1, auto n2){
        if (div3[n1.second] == div3[n2.second])
            return n1.first > n2.first; 
        return div3[n1.second] < div3[n2.second];
    });

    for (int i{len - 1}; i >= 0; --i)
        cout << arr[i].first << " ";
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