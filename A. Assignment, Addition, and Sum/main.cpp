// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/edu/course/2/lesson/5/4/practice/contest/280801/problem/A

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define MAJOONI ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ONLINE_JUDGE
#define _MOD (1000000007)
#define MOD(n) (((n % _MOD) + _MOD) % _MOD)
#define int long long
#define endl '\n'
using namespace std;

struct segmentst
{
    struct Node
    {
        int assign{-1}, add{-1}, sum{0};
    };

    int n;
    vector<Node> st;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n + 1);
    }

    int modify(int a, int b) {
        if (~a) return a + b;
        return b;
    }

    void propagate(int start, int ending, int node)
    {
        if ((!~st[node].assign && !~st[node].add) || start == ending)
            return;

        int mid = (ending + start) / 2;

        if (~st[node].assign)
        {
            st[2 * node + 1].assign = st[node].assign;
            st[2 * node + 1].add = -1;
            st[2 * node + 1].sum = (mid - start + 1) * st[node].assign;

            st[2 * node + 2].assign = st[node].assign;
            st[2 * node + 2].add = -1;
            st[2 * node + 2].sum = (ending - (mid + 1) + 1) * st[node].assign;
        }

        if (~st[node].add)
        {
            st[2 * node + 1].add = modify(st[2 * node + 1].add, st[node].add);
            st[2 * node + 1].sum += (mid - start + 1) * st[node].add;

            st[2 * node + 2].add = modify(st[2 * node + 2].add, st[node].add);
            st[2 * node + 2].sum += (ending - (mid + 1) + 1) * st[node].add;
        }

        st[node].assign = st[node].add = -1;
    }

    int query(int start, int ending, int l, int r, int node)
    {
        propagate(start, ending, node);

        if (start > r || ending < l)
            return 0;

        if (start >= l && ending <= r)
            return st[node].sum;

        int mid = (start + ending) / 2;

        int q1 = query(start, mid, l, r, 2 * node + 1);
        int q2 = query(mid + 1, ending, l, r, 2 * node + 2);

        return q1 + q2;
    }

    void addNode(int start, int ending, int node, int l, int r, int value)
    {
        propagate(start, ending, node);

        if (start > r || ending < l)
            return;

        if (start >= l && ending <= r)
        {
            st[node].add = modify(st[node].add, value);
            st[node].sum += (ending - start + 1) * value;
            return;
        }

        int mid = (start + ending) / 2;

        addNode(start, mid, 2 * node + 1, l, r, value);
        addNode(mid + 1, ending, 2 * node + 2, l, r, value);

        st[node].sum = st[node * 2 + 1].sum + st[node * 2 + 2].sum;

        return;
    }
    void setNode(int start, int ending, int node, int l, int r, int value)
    {
        propagate(start, ending, node);

        if (start > r || ending < l)
            return;

        if (start >= l && ending <= r)
        {
            st[node].assign = value;
            st[node].add = -1;
            st[node].sum = (ending - start + 1) * value;
            return;
        }

        int mid = (start + ending) / 2;

        setNode(start, mid, 2 * node + 1, l, r, value);
        setNode(mid + 1, ending, 2 * node + 2, l, r, value);

        st[node].sum = st[node * 2 + 1].sum + st[node * 2 + 2].sum;

        return;
    }

    int query(int l, int r)
    {
        return query(0, n - 1, l, r, 0);
    }

    void setNode(int l, int r, int x)
    {
        setNode(0, n - 1, 0, l, r, x);
    }

    void addNode(int l, int r, int x)
    {
        addNode(0, n - 1, 0, l, r, x);
    }
};

void solve()
{
    int len, q, t, l, r, v;
    cin >> len >> q;

    segmentst s;
    s.init(len);

    while (q--)
    {
        cin >> t >> l >> r;
        --r;

        if (t < 3)
        {
            cin >> v;
            if (t == 1)
                s.setNode(l, r, v);
            else
                s.addNode(l, r, v);
        }
        else
            cout << s.query(l, r) << endl;
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