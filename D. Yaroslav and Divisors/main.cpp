// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/301/problem/D

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

int const N = 2e5 + 5;
vector<pair<int, int>> qu[N];

void solve()
{
    int len, num, q, quInd{}, l, r, sums;
    cin >> len >> q;

    int arr[len], res[q];
    fenwick f;
    f.init(len);
    unordered_map<int, int> ind;
    vector<vector<int>> add(len + 1);

    for (int i{}; i < len; ++i)
    {
        cin >> arr[i];
        ind[arr[i]] = i;
    }

    for (int i{}; i < q; ++i)
    {
        cin >> l >> r;
        qu[r - 1].push_back({l - 1, i});
    }

    for (int i{}; i < len; ++i)
    {
        num = arr[i];
        for (auto j : add[num])
            f.add(j);

        for (int mul{num}; mul <= len; mul += num)
        {
            if (ind[mul] > i)
                add[mul].push_back(i);
            else
                f.add(min(ind[mul], i));
        }

        for (auto p: qu[i])
        {
            sums = f.sum(p.first, i);
            res[p.second] = sums;
        }
    }

    for (int i{}; i < q; i++)
        cout << res[i] << endl;
}

int32_t main()
{
    MAJOONI
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
#endif
    // int tc ; cin >> tc; while(tc--)
    solve();
}