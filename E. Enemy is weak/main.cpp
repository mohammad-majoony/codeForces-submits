// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/61/problem/E

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

struct fenwick
{
    vector<int> fn;
    int n;

    void init(int n)
    {
        this->n = n + 1;
        fn.resize(this->n, 0);
    }

    void add(int x, int y)
    {
        x++; // 1 based index
        while (x < n)
        {
            fn[x] += y;
            x += (x & (-x)); // last set bit
        }
    }

    int sum(int x)
    {
        x++; // 1 based index
        int ans = 0;
        while (x)
        {
            ans += fn[x];
            x -= (x & (-x)); // last set bit
        }
        return ans;
    }

    int sum(int l, int r)
    {
        return sum(r) - sum(l - 1);
    }
};

void solve()
{
    int len, r, co{};
    cin >> len;
    pair<int, int> arr[len];
    for (int i{}; i < len ; ++i)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr, arr + len);

    fenwick two, add;
    add.init(len + 5);
    two.init(len + 5);
    
    for (int i{}; i < len; ++i)
    {
        r = add.sum(arr[i].second, len);
        add.add(arr[i].second, 1);
        co += two.sum(arr[i].second, len);
        two.add(arr[i].second, r);
    }
    cout << co;
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