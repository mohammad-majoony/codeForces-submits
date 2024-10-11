// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/problemset/problem/1234/D

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
        int size{}, num{};
        Node(int val = -1)
        {
            if (~val)
            {
                num |= (1ll << val);
            }
        }
    };

    Node merge(Node n1, Node n2)
    {
        Node res;
        for (int i{}; i < 26; ++i)
        {
            res.num |= (n1.num & (1ll << i)) | (n2.num & (1ll << i));
            if (1 & (res.num >> i))
                res.size++;
        }
        return res;
    }

    int n;
    vector<Node> st;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n);
    }

    void build(int start, int ending, int node, string t)
    {
        if (start == ending)
        {
            st[node] = Node(t[start] - 'a');
            return;
        }

        int mid = (start + ending) / 2;

        build(start, mid, 2 * node + 1, t);

        build(mid + 1, ending, 2 * node + 2, t);

        st[node] = merge(st[node * 2 + 1], st[node * 2 + 2]);
    }

    Node query(int start, int ending, int l, int r, int node)
    {
        if (start > r || ending < l)
            return Node();

        if (start >= l && ending <= r)
            return st[node];

        int mid = (start + ending) / 2;

        auto q1 = query(start, mid, l, r, 2 * node + 1);
        auto q2 = query(mid + 1, ending, l, r, 2 * node + 2);

        return merge(q1, q2);
    }

    void update(int start, int ending, int node, int index, char value)
    {
        if (start == ending)
        {
            st[node] = Node(value - 'a');
            return;
        }

        int mid = (start + ending) / 2;
        if (index <= mid)
            update(start, mid, 2 * node + 1, index, value);
        else
            update(mid + 1, ending, 2 * node + 2, index, value);

        st[node] = merge(st[node * 2 + 1], st[node * 2 + 2]);

        return;
    }

    void build(string t)
    {
        build(0, n - 1, 0, t);
    }

    int query(int l, int r)
    {
        return query(0, n - 1, l, r, 0).size;
    }

    void update(int x, char y)
    {
        update(0, n - 1, 0, x, y);
    }
};

void solve()
{
    int len, q, ty, l, r;
    string t;
    char ch;
    cin >> t >> q;

    len = t.length(); 
    segmenttree s;
    s.init(len);
    s.build(t);

    while (q--)
    {
        cin >> ty;
        if (ty == 1)
        {
            cin >> l >> ch;
            s.update(--l, ch);
        }
        else
        {
            cin >> l >> r;
            cout << s.query(--l, --r) << endl;
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