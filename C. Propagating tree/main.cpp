// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/383/problem/C

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

#define p pair<int, bool>
#define ind first
#define rank second

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

    int sums(int r)
    {
        return sum(r);
    }
};

int const N = 2e5 + 5;
vector<int> ed[N];
int j{};
p st[N], en[N];

void dfs(int cu, int par, bool rankOdd = true)
{
    st[cu].ind = j++;
    st[cu].rank = rankOdd;

    for (auto node : ed[cu])
    {
        if (node == par)
            continue;
        dfs(node, cu, !rankOdd);
    }

    en[cu].ind = j++;
    st[cu].rank = rankOdd;
}

void solve()
{
    int len, q, x, y, t, v;
    cin >> len >> q;
    vector<int> val(len + 1);

    for (int i{1}; i <= len; ++i)
        cin >> val[i];

    for (int i{}; i < len - 1; ++i)
    {
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }
    dfs(1, 0);

    fenwick fodd, feven;
    fodd.init(j), feven.init(j);

    while (q--)
    {
        cin >> t;
        // query
        if (t == 2)
        {
            cin >> x;
            int res = val[x];
            int ad = ((st[x].rank) ? fodd.sums(en[x].ind - 1) : feven.sums(en[x].ind - 1));
            int mi = ((!st[x].rank) ? fodd.sums(en[x].ind - 1) : feven.sums(en[x].ind - 1));
            cout << res + ad - mi << endl;
        }
        // update
        else
        {
            cin >> x >> v;

            if (st[x].rank)
            {
                fodd.add(st[x].ind, v);
                fodd.add(en[x].ind, -v);
            }
            else 
            {
                feven.add(st[x].ind, v);
                feven.add(en[x].ind, -v);
            }
        }
    }
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