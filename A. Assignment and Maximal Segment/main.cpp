// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/edu/course/2/lesson/5/2/practice/contest/279653/problem/F

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
    struct Node
    {
        int maxi{}, sums{};
        int l{}, r{};

        Node (int val = 0, int count = 1)
        {
            sums = val * count;
            maxi = l = r = max(val, 0ll) * count;
        }
    };

    Node merge(Node n1, Node n2)
    {
        Node newn;
        newn.sums = n1.sums + n2.sums;
        newn.l = max(n1.l, n1.sums + n2.l);
        newn.r = max(n2.r, n2.sums + n1.r);
        newn.maxi = max({n1.r + n2.l, newn.l, newn.r, newn.sums, n1.sums, n2.sums, newn.sums, n1.maxi, n2.maxi});
        return newn; 
    }

    int n;
    vector<Node> st; 
    vector<int> lazy;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n);
        lazy.resize(4 * n, LLONG_MAX);
    }

    void update(int start, int ending, int node, int l, int r, int value)
    {
        if (lazy[node] != LLONG_MAX)
        {
            st[node] = Node(lazy[node], ending - start + 1);
            if (start != ending)
            {
                lazy[2 * node + 1] = lazy[node];
                lazy[2 * node + 2] = lazy[node];
            }
            lazy[node] = LLONG_MAX;
        }

        if (start > r || ending < l)
            return;

        if (start >= l && ending <= r)
        {
            st[node] = Node(value, ending - start + 1);
            if (start != ending)
            {
                lazy[2 * node + 1] = value;
                lazy[2 * node + 2] = value;
            }
            return;
        }

        int mid = (start + ending) / 2;

        update(start, mid, 2 * node + 1, l, r, value);
        update(mid + 1, ending, 2 * node + 2, l, r, value);

        st[node] = merge(st[node * 2 + 1], st[node * 2 + 2]);

        return;
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
    
    while (q--)
    {
        cin >> l >> r >> v;
        s.update(l, --r, v);
        cout << s.st[0].maxi << endl;
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