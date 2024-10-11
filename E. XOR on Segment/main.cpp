// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/242/E

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

int const N = 30;
struct segmenttree
{
    struct Node
    {
        int sums{};
        int bits[N]{0};

        void updateNode(int val, int count)
        {
            int mul = 1;
            sums = 0;
            for (int i{}; i < N; ++i)
            {
                if ((val >> i) & 1)
                    bits[i] = count - bits[i];

                sums += bits[i] * mul;
                mul *= 2;
            }
        }
    };

    Node merge(Node n1, Node n2)
    {
        Node newn;
        int mul = 1;
        for (int i{}; i < N; ++i)
        {
            newn.bits[i] = n1.bits[i] + n2.bits[i];
            newn.sums += (newn.bits[i]) * mul;
            mul *= 2;
        }
        return newn;
    }

    int n;
    vector<int> lazy;
    vector<Node> st;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n);
        lazy.resize(4 * n, 0);
    }

    void build(int start, int ending, int node, vector<int> &v)
    {
        if (start == ending)
        {
            st[node].updateNode(v[start], ending - start + 1);
            return;
        }

        int mid = (start + ending) / 2;

        build(start, mid, 2 * node + 1, v);
        build(mid + 1, ending, 2 * node + 2, v);

        st[node] = merge(st[node * 2 + 1], st[node * 2 + 2]);
    }

    Node query(int start, int ending, int l, int r, int node)
    {
        if (start > r || ending < l)
        {
            Node newn;
            return newn;
        }

        if (lazy[node] != 0)
        {
            st[node].updateNode(lazy[node], ending - start + 1);
            if (start != ending)
            {
                lazy[2 * node + 1] ^= lazy[node];
                lazy[2 * node + 2] ^= lazy[node];
            }
            lazy[node] = 0;
        }

        if (start >= l && ending <= r)
            return st[node];

        int mid = (start + ending) / 2;

        auto q1 = query(start, mid, l, r, 2 * node + 1);
        auto q2 = query(mid + 1, ending, l, r, 2 * node + 2);

        return merge(q1, q2);
    }

    void update(int start, int ending, int node, int l, int r, int value)
    {

        if (lazy[node] != 0)
        {
            st[node].updateNode(lazy[node], ending - start + 1);
            if (start != ending)
            {
                lazy[2 * node + 1] ^= lazy[node];
                lazy[2 * node + 2] ^= lazy[node];
            }
            lazy[node] = 0;
        }

        if (start > r || ending < l)
            return;

        if (start >= l && ending <= r)
        {
            st[node].updateNode(value, ending - start + 1);
            if (start != ending)
            {
                lazy[2 * node + 1] ^= value;
                lazy[2 * node + 2] ^= value;
            }
            return;
        }

        int mid = (start + ending) / 2;
        update(start, mid, 2 * node + 1, l, r, value);
        update(mid + 1, ending, 2 * node + 2, l, r, value);

        st[node] = merge(st[node * 2 + 1], st[node * 2 + 2]);

        return;
    }

    void build(vector<int> &v)
    {
        build(0, n - 1, 0, v);
    }

    int query(int l, int r)
    {
        return query(0, n - 1, l, r, 0).sums;
    }

    void update(int l, int r, int x)
    {
        update(0, n - 1, 0, l, r, x);
    }
};

void solve()
{
    int len, q, t, l, r, v;
    cin >> len;

    vector<int> arr(len);
    for (int i{}; i < len; ++i)
        cin >> arr[i];

    segmenttree s;
    s.init(len);
    s.build(arr);

    cin >> q;
    while (q--)
    {
        cin >> t >> l >> r;

        // query
        if (t == 1)
            cout << s.query(--l, --r) << endl;
        else
        {
            cin >> v;
            s.update(--l, --r, v);
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