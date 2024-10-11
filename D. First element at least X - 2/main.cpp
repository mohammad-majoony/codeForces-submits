// When i wrote this code, only me and God knew how it works. Now only God knows...
// https://codeforces.com/edu/course/2/lesson/4/2/practice/contest/273278/problem/D

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
    vector<int> st;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n, -1);
    }

    void build(int start, int ending, int node, vector<int> &v)
    {
        if (start == ending)
        {
            st[node] = v[start];
            return;
        }

        int mid = (start + ending) / 2;

        build(start, mid, 2 * node + 1, v);
        build(mid + 1, ending, 2 * node + 2, v);

        st[node] = max(st[node * 2 + 1], st[node * 2 + 2]);
    }

    int query(int start, int ending, int l, int r, int node, int val)
    {
        if (start > r || ending < l || st[node] < val)
            return LLONG_MAX;

        int mid = (start + ending) / 2, q1 = LLONG_MAX, q2 = LLONG_MAX;

        if (start >= l && ending <= r)
        {
            if (start == ending && st[node] >= val)
                return start;

            if (st[2 * node + 1] >= val)
                return query(start, mid, l, r, 2 * node + 1, val);
            else if (st[2 * node + 2] >= val)
                return query(mid + 1, ending, l, r, 2 * node + 2, val);
        }
        else
        {
            q1 = query(start, mid, l, r, 2 * node + 1, val);
            q2 = query(mid + 1, ending, l, r, 2 * node + 2, val);
        }

        return min(q1, q2);
    }

    void update(int start, int ending, int node, int index, int value)
    {
        if (start == ending)
        {
            st[node] = value;
            return;
        }

        int mid = (start + ending) / 2;
        if (index <= mid)
            update(start, mid, 2 * node + 1, index, value);
        else
            update(mid + 1, ending, 2 * node + 2, index, value);

        st[node] = max(st[node * 2 + 1], st[node * 2 + 2]);

        return;
    }

    void build(vector<int> &v)
    {
        build(0, n - 1, 0, v);
    }

    int query(int l, int val)
    {
        int res = query(0, n - 1, l, n - 1, 0, val);
        return ((res == LLONG_MAX) ? -1 : res);
    }

    void update(int x, int y)
    {
        update(0, n - 1, 0, x, y);
    }
};

void solve()
{
    int len, q, t, ind, v;
    cin >> len >> q;
    vector<int> arr(len);

    for (int i{}; i < len; ++i)
        cin >> arr[i];

    segmenttree s;
    s.init(len);
    s.build(arr);

    while (q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> ind >> v;
            s.update(ind, v);
        }
        else
        {
            cin >> v >> ind;
            cout << s.query(ind, v) << endl;
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