// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/edu/course/2/lesson/4/3/practice/contest/274545/problem/A

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

    void add(int x)
    {
        x++; // 1 based index
        while (x < n)
        {
            fn[x]++;
            x += (x & (-x)); // last set bit
        }
    }

    int sums(int x)
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

    int sum(int r)
    {
        return sums(r);
    }
};

void solve()
{
    int len;
    cin >> len;
    pair<int, int> arr[len];
    int res[len];

    for (int i{}; i < len; ++i)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr, arr + len);

    fenwick f;
    f.init(len);

    for (int i{len - 1}; i >= 0; --i)
    {
        res[arr[i].second] = f.sum(arr[i].second);
        f.add(arr[i].second); 
    }

    for (int i{}; i < len; ++i)
        cout << res[i] << " ";
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