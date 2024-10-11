// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/edu/course/2/lesson/5/2/practice/contest/279653/problem/B

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

struct segmenttree
{
    int n;
    vector<int> st, lazy;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n, 0);
        lazy.resize(4 * n, 1);
    }

    void build(int start, int ending, int node)
    {
        if (start == ending)
        {
            st[node] = 1ll;
            return;
        }

        int mid = (start + ending) / 2;

        build(start, mid, 2 * node + 1);
        build(mid + 1, ending, 2 * node + 2);

        st[node] = MOD(st[node * 2 + 1] + st[node * 2 + 2]);
    }

    int query(int start, int ending, int l, int r, int node)
    {
        if (lazy[node] != 1)
        {
            st[node] = MOD(st[node] * lazy[node]);
            if (start != ending)
            {
                lazy[2 * node + 1] = MOD(lazy[2 * node + 1] * lazy[node]);
                lazy[2 * node + 2] = MOD(lazy[2 * node + 2] * lazy[node]);
            }
            lazy[node] = 1ll;
        }

        if (start > r || ending < l)
            return 0ll;

        if (start >= l && ending <= r)
            return MOD(st[node]);

        int mid = (start + ending) / 2;

        int q1 = query(start, mid, l, r, 2 * node + 1);
        int q2 = query(mid + 1, ending, l, r, 2 * node + 2);

        return MOD(q1 + q2);
    }

    void update(int start, int ending, int node, int l, int r, int value)
    {
        if (lazy[node] != 1)
        {
            st[node] = MOD(st[node] * lazy[node]);
            if (start != ending)
            {
                lazy[2 * node + 1] = MOD(lazy[2 * node + 1] * lazy[node]);
                lazy[2 * node + 2] = MOD(lazy[2 * node + 2] * lazy[node]);
            }
            lazy[node] = 1ll;
        }

        if (start > r || ending < l)
            return;

        if (start >= l && ending <= r)
        {
            st[node] = MOD(st[node] * value);
            if (start != ending)
            {
                lazy[2 * node + 1] = MOD(lazy[2 * node + 1] * value);
                lazy[2 * node + 2] = MOD(lazy[2 * node + 2] * value);
            }
            return;
        }

        int mid = (start + ending) / 2;

        update(start, mid, 2 * node + 1, l, r, value);
        update(mid + 1, ending, 2 * node + 2, l, r, value);

        st[node] = MOD(st[node * 2 + 1] + st[node * 2 + 2]);

        return;
    }

    void build()
    {
        build(0, n - 1, 0);
    }

    int query(int l, int r)
    {
        return MOD(query(0, n - 1, l, r, 0));
    }

    void update(int l, int r, int x)
    {
        update(0, n - 1, 0, l, r, x);
    }
};

void solve()
{
    int len, q, t, l, r, v;
    cin >> len >> q;

    segmenttree s;
    s.init(len);
    s.build();
    
    while (q--)
    {
        cin >> t >> l >> r;
        if (t == 2)
            cout << s.query(l, --r) << endl;
        else 
        {
            cin >> v;
            s.update(l, --r, v);
        }
    }
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