// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/contest/145/problem/E

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
        int n4{}, n7{}, n47{}, n74{}, maxi{};

        void init4(bool is4)
        {
            if (is4)
                n4 = n47 = n74 = maxi = 1;
            else 
                n7 = n47 = n74 = maxi = 1;
        }

        Node merge(Node n2)
        {
            Node newn;
            newn.n4 = this->n4 + n2.n4;  
            newn.n7 = this->n7 + n2.n7;

            newn.n47 = max(this->n4 + n2.n47, this->n47 + n2.n7);  
            newn.n74 = max(this->n7 + n2.n74, this->n74 + n2.n4);  
            newn.maxi = max({newn.n4, newn.n7, newn.n47});

            return newn;
        }

        void sw()
        {
            swap(this->n4, this->n7);
            swap(this->n47, this->n74);
            maxi = max({this->n4, this->n7, this->n47});
        }
    };

    int n;
    vector<Node> st;
    vector<bool> lazy;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n);
        lazy.resize(4 * n, false);
    }

    void build(int start, int ending, int node, string &v)
    {
        if (start == ending)
        {
            Node newn;
            newn.init4(v[start] == '4');
            st[node] = newn;
            return;
        }

        int mid = (start + ending) / 2;

        build(start, mid, 2 * node + 1, v);
        build(mid + 1, ending, 2 * node + 2, v);

        st[node] = st[node * 2 + 1].merge(st[node * 2 + 2]);
    }

    Node query(int start, int ending, int l, int r, int node)
    {
        if (start > r || ending < l)
        {
            Node newn;
            return newn;
        }

        if (lazy[node])
        {
            st[node].sw(); 
            if (start != ending)
            {
                lazy[2 * node + 1] = lazy[2 * node + 1] ^ true;
                lazy[2 * node + 2] = lazy[2 * node + 2] ^ true;
            }
            lazy[node] = false;
        }

        if (start >= l && ending <= r)
            return st[node];

        int mid = (start + ending) / 2;

        auto q1 = query(start, mid, l, r, 2 * node + 1);
        auto q2 = query(mid + 1, ending, l, r, 2 * node + 2);

        return q1.merge(q2);
    }

    void update(int start, int ending, int node, int l, int r)
    {

        if (lazy[node])
        {
            st[node].sw();
            if (start != ending)
            {
                lazy[2 * node + 1] = lazy[2 * node + 1] ^ true;
                lazy[2 * node + 2] = lazy[2 * node + 2] ^ true;
            }
            lazy[node] = false;
        }

        if (start > r || ending < l)
            return;

        if (start >= l && ending <= r)
        {
            st[node].sw();
            if (start != ending)
            {
                lazy[2 * node + 1] = lazy[2 * node + 1] ^ true;
                lazy[2 * node + 2] = lazy[2 * node + 2] ^ true;
            }
            return;
        }

        int mid = (start + ending) / 2;

        update(start, mid, 2 * node + 1, l, r);
        update(mid + 1, ending, 2 * node + 2, l, r);

        st[node] = st[node * 2 + 1].merge(st[node * 2 + 2]);

        return;
    }

    void build(string &v)
    {
        build(0, n - 1, 0, v);
    }

    int query()
    {
        return query(0, n - 1, 0, n - 1, 0).maxi;
    }

    void update(int l, int r)
    {
        update(0, n - 1, 0, l, r);
    }
};

void solve()
{
    int len, q, l, r;
    string t;
    cin >> len >> q >> t;

    segmenttree s;
    s.init(len);
    s.build(t);

    while (q--)
    {
        cin >> t;
        if (t == "count")
            cout << s.query() << endl;
        else 
        {
            cin >> l >> r;
            s.update(--l, --r);
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